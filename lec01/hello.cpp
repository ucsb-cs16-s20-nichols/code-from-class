// compile: g++ hello.cpp -o hello
// run: ./hello

#include <iostream> // this is a library that gives me cout
// it lives in the standard library
// Everything in the standard library is prefixed by "std::"
// a shortcut for using std:: all the time is the "using" keyword
using namespace std;

int main() {

    // cout prints anything given to it by the <<s
    cout << "Hello, world!" << endl;

    return 0;
}
