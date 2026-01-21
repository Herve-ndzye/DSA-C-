#ifndef SUDOKU_H
#define SUDOKU_H

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Group.H>
#include <vector>
#include <string>

class SudokuGame {
private:
    int board[9][9];
    int solution[9][9];
    bool fixed[9][9]; // To mark fixed cells
    Fl_Window* mainWindow;
    Fl_Int_Input* cellInputs[9][9];
    Fl_Button* numberButtons[10]; // 0-9, 0 for clear
    Fl_Button* checkButton;
    Fl_Button* solveButton;
    Fl_Button* newGameButton;
    Fl_Box* statusBox;

    // Game logic methods
    bool isValid(int row, int col, int num);
    bool solveSudoku();
    bool findEmptyCell(int& row, int& col);
    void generatePuzzle();
    void clearBoard();

    // GUI methods
    void createGUI();
    static void cellCallback(Fl_Widget* widget, void* data);
    static void numberCallback(Fl_Widget* widget, void* data);
    static void checkCallback(Fl_Widget* widget, void* data);
    static void solveCallback(Fl_Widget* widget, void* data);
    static void newGameCallback(Fl_Widget* widget, void* data);

public:
    SudokuGame();
    ~SudokuGame();
    void play();
    void updateDisplay();
    void checkSolution();
    void solvePuzzle();
    void newGame();
};

#endif