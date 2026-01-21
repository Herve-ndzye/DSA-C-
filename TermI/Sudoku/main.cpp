#include "sudoku.h"
#include <FL/Fl.H>

int main() {
    SudokuGame game;
    game.play();
    return Fl::run();
}
