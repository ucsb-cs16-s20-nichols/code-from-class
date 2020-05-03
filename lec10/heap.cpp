#include <iostream>
using namespace std;

// we want to, inside of this function, create an integer
// on the heap, and return the address of it so that main
// can continue to use that integer
int* createAnInt() {
    // to do that, we use the "new" keyword

    // new takes a type as a "parameter", and it returns back
    // the address of something of that type on the heap
    int *new_int = new int;
    return new_int;
}

int* createAnArray(int len) {
    // you can use the heap to make arrays too!
    return new int[len]; // returns the starting address of that new array
}

int main() {
    int *i = createAnInt(); // make an int on the heap

    *i = 42;
    cout << *i << endl;

    // now we're done using i; let's delete it
    delete i; // delete takes a pointer to something on the heap, 
              // and deletes the memory at that addr.

    return 0;
}