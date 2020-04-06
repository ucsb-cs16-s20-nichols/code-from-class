#include <iostream>
using namespace std;

// let's create a library to hold our sum function!
// we include the header file, which only contains the declarations
#include "sum.h" // for the sum function

// let's also make a library for test driven development-related function
#include "tdd.h" // for the assertTrue

// we need to give the compiler the actual implementations, though,
// which lives in sum.cpp and tdd.cpp (otherwise you'll get a linker error)

// compile with: g++ using-sum-library.cpp sum.cpp tdd.cpp -o using-sum-library
// the sum.cpp and tdd.cpp are important

int main() {
    // let's write a bunch of tests for our sum function
    
    // test 1: sum(0, 42) = 42
    assertTrue("sum(0, 42)", sum(0, 42) == 42);

    // test 2: sum(-5, 5) = 0
    assertTrue("sum(-5, 5)", sum(-5, 5) == 0);

    return 0;
}