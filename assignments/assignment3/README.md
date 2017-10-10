# Assignment 3

## Part 1

1. Write a function called *getDegreeOfScatter* that prompts the user to enter an **integer** between 1 and 100 (inclusive) and it returns the value. The function should reprompt the user if a value outside the range or the value given is not an integer. The function header should look like this:

        int getDegreeOfScatter() {
        
        }
**HINT:** Look at the documentation for simpio.h [here](http://stanford.edu/~stepp/cppdoc/simpio.html)
        
2. Write a function called *getRandomNumber* that takes in **two integers** as an upper and lower bound (inclusive) and returns a **random integer** as a result. Again, the function should reprompt the user if the input given is invalid.
The function header should look like this:

        int getRandomNumber(int lower, int upper) {
        
        }

**HINT:** Look at the documentation for random.h [here](http://stanford.edu/~stepp/cppdoc/random.html)

3. Write a function called *randomGrid* that returns a **grid** populated with random integers smaller than or equal to 10000. The function takes **two integers** as arguments, the *number of Rows* and the *number of Columns*. Call your function in *main* and print the resulting grid. The function header should look like this:

        Grid<int> randomGrid(int nRows, int nCols) {
        
        }

**HINT:** Look at the documentation for grid.h [here](http://stanford.edu/~stepp/cppdoc/Grid-class.html)

## Part 2 - Advanced

1. Implement Scatter in Fauxtoshop. Read the problem statement [here](https://github.com/cadtexas/fa17-cplusplus/blob/master/workshops/workshop4/Fauxtoshop.pdf)
 
