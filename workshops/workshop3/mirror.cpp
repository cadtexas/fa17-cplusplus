#include <iostream>
#include "console.h"
#include "grid.h"
#include "random.h"

using namespace std;

Grid<int> mirror_copy(Grid<int> matrix);
void mirror_reference(Grid<int>& matrix);

int main() {

    Grid<int> g(3, 3);

    for(int r = 0; r < g.height(); r++) {
        for(int c = 0; c < g.width(); c++) {
            g[r][c] = randomInteger(0, 100);
        }
    }

    cout << "Original Grid: " << endl;
    cout << g.toString2D() << endl;

    Grid<int> result;

    result = mirror_copy(g); //g remains intact

    cout << "New Grid: " << endl;
    cout << result.toString2D() << endl;

    return 0;
}

Grid<int> mirror_copy(Grid<int> matrix)
{
    for (int r = 0; r < matrix.height(); r++) {
        for (int c = r; c < matrix.width(); c++) {
            int temp = matrix[r][c];
            matrix[r][c] = matrix[c][r];
            matrix[c][r] = temp;
        }
    }
    return matrix;
}

//    mirror_reference(g); //modifies g
//void mirror_reference(Grid<int>& matrix) {

//}
