#include "sudoku.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Int_Input.H>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

SudokuGame::SudokuGame() {
    std::srand(std::time(0));
    clearBoard();

    // Initialize GUI pointers
    mainWindow = nullptr;
    checkButton = nullptr;
    solveButton = nullptr;
    newGameButton = nullptr;
    statusBox = nullptr;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cellInputs[i][j] = nullptr;
        }
    }

    createGUI();
    newGame();
}

SudokuGame::~SudokuGame() {
    if (mainWindow) delete mainWindow;
}

void SudokuGame::createGUI() {
    mainWindow = new Fl_Window(550, 720, "Sudoku Game");
    mainWindow->color(FL_WHITE);

    int cellSize = 50;
    int startX = 30, startY = 40;

    // Sudoku Grid (inputs)
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int x = startX + j * cellSize;
            int y = startY + i * cellSize;

            cellInputs[i][j] = new Fl_Int_Input(x, y, cellSize, cellSize);
            cellInputs[i][j]->textsize(22);
            cellInputs[i][j]->align(FL_ALIGN_CENTER);
            cellInputs[i][j]->maximum_size(1);
            cellInputs[i][j]->when(FL_WHEN_CHANGED);
            cellInputs[i][j]->callback(cellCallback, this);
        }
    }

    // Overlay bold lines for 3x3 blocks
    for (int k = 0; k <= 9; k++) {
        Fl_Box* vline = new Fl_Box(startX + k * cellSize, startY, (k % 3 == 0) ? 3 : 1, 9 * cellSize);
        vline->box(FL_FLAT_BOX);
        vline->color(FL_BLACK);

        Fl_Box* hline = new Fl_Box(startX, startY + k * cellSize, 9 * cellSize, (k % 3 == 0) ? 3 : 1);
        hline->box(FL_FLAT_BOX);
        hline->color(FL_BLACK);
    }

    // Control buttons
    checkButton = new Fl_Button(60, 630, 120, 35, "Check");
    checkButton->callback(checkCallback, this);

    solveButton = new Fl_Button(210, 630, 120, 35, "Solve");
    solveButton->callback(solveCallback, this);

    newGameButton = new Fl_Button(360, 630, 120, 35, "New Game");
    newGameButton->callback(newGameCallback, this);

    // Status Box
    statusBox = new Fl_Box(FL_DOWN_BOX, 100, 680, 350, 30, "Ready!");
    statusBox->labelfont(FL_BOLD);
    statusBox->align(FL_ALIGN_CENTER);

    mainWindow->end();
}

void SudokuGame::clearBoard() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            board[i][j] = 0;
            solution[i][j] = 0;
            fixed[i][j] = false;
        }
    }
}

bool SudokuGame::isValid(int row, int col, int num) {
    for (int j = 0; j < 9; j++) if (board[row][j] == num) return false;
    for (int i = 0; i < 9; i++) if (board[i][col] == num) return false;

    int boxRow = (row / 3) * 3;
    int boxCol = (col / 3) * 3;
    for (int i = boxRow; i < boxRow + 3; i++) {
        for (int j = boxCol; j < boxCol + 3; j++) {
            if (board[i][j] == num) return false;
        }
    }
    return true;
}

bool SudokuGame::findEmptyCell(int& row, int& col) {
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (board[row][col] == 0) return true;
        }
    }
    return false;
}

bool SudokuGame::solveSudoku() {
    int row, col;
    if (!findEmptyCell(row, col)) return true;

    for (int num = 1; num <= 9; num++) {
        if (isValid(row, col, num)) {
            board[row][col] = num;
            if (solveSudoku()) return true;
            board[row][col] = 0;
        }
    }
    return false;
}

void SudokuGame::generatePuzzle() {
    clearBoard();

    // Fill diagonal 3x3 boxes
    for (int box = 0; box < 3; box++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int row = box * 3 + i;
                int col = box * 3 + j;
                int num;
                bool valid;
                do {
                    valid = true;
                    num = (std::rand() % 9) + 1;
                    for (int x = box * 3; x < box * 3 + 3; x++) {
                        for (int y = box * 3; y < box * 3 + 3; y++) {
                            if (board[x][y] == num) { valid = false; break; }
                        }
                        if (!valid) break;
                    }
                } while (!valid);
                board[row][col] = num;
            }
        }
    }

    // Solve fully
    solveSudoku();

    // Store solution
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            solution[i][j] = board[i][j];

    // Remove numbers (approx. 40–45 left)
    int numbersToRemove = 45 + (std::rand() % 6);
    int removed = 0;
    while (removed < numbersToRemove) {
        int row = std::rand() % 9;
        int col = std::rand() % 9;
        if (board[row][col] != 0) {
            board[row][col] = 0;
            removed++;
        }
    }

    // Mark fixed cells
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            fixed[i][j] = (board[i][j] != 0);
        }
    }
}

void SudokuGame::updateDisplay() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == 0) {
                cellInputs[i][j]->value("");
            } else {
                char str[2] = { '0' + board[i][j], '\0' };
                cellInputs[i][j]->value(str);
            }
            if (fixed[i][j]) {
                cellInputs[i][j]->color(FL_LIGHT2);
                cellInputs[i][j]->readonly(1);
                cellInputs[i][j]->textfont(FL_BOLD);
            } else {
                cellInputs[i][j]->color(FL_WHITE);
                cellInputs[i][j]->readonly(0);
                cellInputs[i][j]->textfont(FL_HELVETICA);
            }
        }
    }
    mainWindow->redraw();
}

void SudokuGame::checkSolution() {
    bool correct = true;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] != solution[i][j]) {
                correct = false;
                cellInputs[i][j]->color(FL_RED);
            } else if (!fixed[i][j]) {
                cellInputs[i][j]->color(FL_GREEN);
            }
        }
    }
    if (correct) {
        statusBox->label("🎉 Congratulations! Puzzle solved!");
    } else {
        statusBox->label("⚠️ Some cells are incorrect!");
    }
    mainWindow->redraw();
}

void SudokuGame::solvePuzzle() {
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            board[i][j] = solution[i][j];

    updateDisplay();
    statusBox->label("Puzzle solved!");
}

void SudokuGame::newGame() {
    generatePuzzle();
    updateDisplay();
    statusBox->label("New game started!");
}

void SudokuGame::play() {
    mainWindow->show();
}

// Callbacks
void SudokuGame::cellCallback(Fl_Widget* widget, void* data) {
    SudokuGame* game = static_cast<SudokuGame*>(data);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (game->cellInputs[i][j] == widget) {
                const char* val = game->cellInputs[i][j]->value();
                if (val && *val >= '1' && *val <= '9') {
                    game->board[i][j] = *val - '0';
                } else {
                    game->board[i][j] = 0;
                }
            }
        }
    }
}

void SudokuGame::checkCallback(Fl_Widget* widget, void* data) {
    static_cast<SudokuGame*>(data)->checkSolution();
}

void SudokuGame::solveCallback(Fl_Widget* widget, void* data) {
    static_cast<SudokuGame*>(data)->solvePuzzle();
}

void SudokuGame::newGameCallback(Fl_Widget* widget, void* data) {
    static_cast<SudokuGame*>(data)->newGame();
}
