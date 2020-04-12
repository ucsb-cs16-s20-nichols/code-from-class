#include <iostream>
#include "hello.h"
using namespace std;

// g++ -c useHello.cpp <--- create useHello.o
// g++ -c hello.cpp <--- create hello.o
// g++ -o useHello useHello.o hello.o <--- create final executable (useHello)

int main() {
    printHello();
    return 0;
}