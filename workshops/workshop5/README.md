# Workshop Code

## Pointers

### Creating a poiner

```cpp
    int x;   // declaring a variable called 'x' of type int
    int* p;  // declaring variable called 'p' of type int* (aka pointer)
    
    x = 100; // initializing variable x to 100
    p = &x;  // initializing variable p to the address of x. Remember that &x returns the addres of x.
```
### Dereferencing a pointer

```cpp
    // If we have a pointer, say p from the example above, and we want to 'dereference' it.
    // That is, we want to get the value that it points to.
    // If p points to x, how we get the value of x is by dereferencing p with the * operator. Like so:
    
    std::cout << *p << std::endl;  // This will print 100
    
    // We can also save the value of *p to another variable
    
    int y = *p;
    
    std::cout << y << std::endl;   // This will also print 100
    
    
    // If we want to change the value of x from 100 say to 5, we can do that through p
    
    *p = 5;
    
    std::cout << x << std::endl;   // This will print 5;
```

### Keywords 'new' and 'delete'  
```cpp
    // We can also create pointers directly with the keyword 'new'
    int* cpp = new int;
    
    // And use 'delete' when we're done with them
    delete cpp;
```

## Input, Random, and Grid Examples

See code [here](https://github.com/cadtexas/fa17-cplusplus/edit/master/workshops/workshop5/grid_examples.cpp)

