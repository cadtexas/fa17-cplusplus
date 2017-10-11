# Survey

## Question 1 - For Loops


``` cpp
#include <iostream>
#include "simpio.h"

using namespace std;

int main() {
    cout << "Loop 1" << endl;
    for(int i = 0; i < 10; i++) {
        cout << i << " ";
    }

    cout << "Loop 2" << endl;
    for(int i = 10; i > 0; i--) {
        cout << i << " ";
    }
    cout << "Loop 3" << endl;
    int num = getInteger("How many numbers to print: ");
    for(int i = num; i > 0; i--) {
        cout << i << " ";
    }
    return 0;
}
```

## Question 2 - While Loops

``` cpp
#include <iostream>
#include "simpio.h"

using namespace std;

int main() {
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
    return 0;
}
```

## Question 3 - Vector

``` cpp
#include <iostream>
#include "vector.h"
#include "simpio.h"

using namespace std;

void insertionSort(Vector<int> &vector);

int main() {
    Vector<int> numbers;
    while(true) {
        int numberToAdd = getInteger("Add a number to sort (negative number to stop):");
        if(numberToAdd < 0) break;
        numbers.add(numberToAdd);
    }
    cout << "Original: " << numbers << endl;
    insertionSort(numbers);
    cout << "Sorted: " << numbers << endl;
    return 0;
}

// Algorithm called "Insertion sort" to sort a vector in ascending order
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
```

## Question 4 - Grid

``` cpp
#include <iostream>
#include "console.h"
#include "gwindow.h" // for GWindow
#include "grid.h"
#include "simpio.h"


using namespace std;

int main() {
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

    return 0;
}
```



