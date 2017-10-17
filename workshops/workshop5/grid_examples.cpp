#include <iostream>
#include "console.h"
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
#include "random.h"
#include "grid.h"

using namespace std;

int getDegreeOfScatter();
Grid<int> randomGrid(int nRows, int nCols);

int main() {
    int value = getDegreeOfScatter();
    cout << value << endl;

    Grid<int> someRandomGrid = randomGrid(10, 10);
    cout << someRandomGrid << endl;
    return 0;
}

int getDegreeOfScatter() {
    int scatter;
    do {
        scatter = getInteger("Enter the degree of scatter between 1-100", "Wrong input. Try again");
    }while (scatter > 100 || scatter < 1);
    return scatter;
}

int getRandomNumber(int lower, int upper) {
    int rand = randomInteger(lower, upper);
    return rand;
}

Grid<int> randomGrid(int nRows, int nCols) {
    Grid<int> g(nRows, nCols);
    for (int r = 0; r < nRows; r++) {
        for (int c = 0; c < nCols; c++) {
            g[r][c] = getRandomNumber(0, 10000);
        }
    }
    return g;
}
