#include <iostream>
#include "console.h"
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
#include "grid.h"  // for Grid
#include "hello.h"
using namespace std;

int main() {

    cout << "This is a for loop that prints the numbers 0 to 9" << endl;
    for(int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl << endl;
    cout << "This is a for loop that prints the numbers 10 to 1" << endl;
    for(int i = 10; i > 0; i--) {
        cout << i << " ";
    }
    cout << endl << endl;
    int num = getInteger("How many numbers to print: ");
    for(int i = num; i > 0; i--) {
        cout << i << " ";
    }
    cout << endl << endl;

    string prompt = "Guess a decimal number between 1 and 10 with one decimal point (e.g. 1.5): ";
    double secret = 3.7;
    double guess = -1;
    int count = 1;
    guess = getReal(prompt);
    while(secret != guess) {
        if(guess > secret) {
            cout << "Lower!" << endl;
        }
        else {
            cout << "Higher!" << endl;
        }
        guess = getReal(prompt);
        count++;
    }
    cout << "It took you " << count << " tries to guess " << secret << "!" << endl;

    Vector<int> numbers;
    while(true) {
        int numberToAdd = getInteger("Add a number to sort (negative number to stop):");
        if(numberToAdd < 0) break;
        numbers.add(numberToAdd);
    }
    cout << "Original: " << numbers << endl;
    insertionSort(numbers);
    cout << "Sorted: " << numbers << endl;

    int size = 10;
    Grid<bool> draw(size,size);
    draw.fill(true);
    for(int i = 0; i < size; i++) {
        draw.set(i,i,false);
    }
    cout << draw.toString2D() << endl;


    int windowSize = 300;
    int blockSize = windowSize/size;
    GWindow window(windowSize, windowSize);
    window.setColor("White");
    window.clear();
    window.setWindowTitle("C++ Language Rundown #1");
    window.setColor("Black");
    for(int x = 0; x < draw.width(); x++) {
        for(int y = 0;y < draw.height(); y++) {
            if(draw.get(x,y)) {
                window.fillRect(x*blockSize,y*blockSize,blockSize,blockSize);
            }
        }
    }

    window.setVisible(true);

    getLine("Press [Enter] to close the window... ");
    window.requestFocus();
    window.close();
    exitGraphics();

    cout << endl << "Program completed." << endl;

    return 0;
}

void insertionSort(Vector<int> &vector) {
   int i, key, j;
   for (i = 1; i < vector.size(); i++) {
       key = vector.get(i);
       j = i-1;

       while (j >= 0 && vector.get(j) > key){
           vector.set(j+1, vector.get(j));
           j = j-1;
       }
       vector.set(j+1, key);
   }
}
