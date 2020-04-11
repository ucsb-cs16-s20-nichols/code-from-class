#include <iostream>
#include <cstdlib>
#include <string>
#include "shapes.h" // we only need the declaration to compile
#include "tdd.h"
using namespace std;

// now, if we change tdd.cpp or shapes.cpp, we don't have to 
// recompile this file!

int main(int argc, char *argv[]) {
    // get the width from the user
    // int n;
    // cout << "Enter the width of the square\n";
    // cin >> n;

    // let's write tests for our drawTriangle function!
    assertTrue("drawTriangle(1)", drawTriangle(1) == "*\n");

    assertTrue("drawTriangle(2)", drawTriangle(2) == "");

    assertTrue("drawTriangle(3)", drawTriangle(3) == " * \n***\n");

    assertTrue("drawTriangle(5)", drawTriangle(5) == "  *  \n *** \n*****\n");

    return 0;
}