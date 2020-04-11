#include <iostream>
using namespace std;

// g++ –S hello.cpp  <-- create assembly (hello.s)

// g++ –c hello.cpp    <-- compiles to "object code" (hello.o)
// This is the compiled machine code for a single .cpp file

// g++ –o hello hello.cpp  <--- compiles and links libraries

// g++ –o hello hello.o  <--- links only (because you've already compiled)

// g++ –o hello hello.o library1.o library2.o  <--- links multiple precompiled libraries that you make!

int main() {
    cout << "Hello, world!\n";
    return 0;
}