# Survey

## Question 1 - For Loops


``` cpp
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
