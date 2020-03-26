#include <iostream> // for cout 
#include <string> // for strings
using namespace std; // so I don't have to keep std::

int main() { // whitespace doesn't matter in C++
    // instead, we use braces for blocks of code and ;s to mark the end
    // of lines
    int x; // declare only
    x = 5; // to declare a variable, I have to also give its type
    // before you use a variable, you must "declare it", which means to give its type
    x = x+1;
    cout << x << endl;

    bool b = true; // there's also false
    cout << b << endl;

    string s = "hi"; // you HAVE to use "s for strings
    cout << s << endl;

    double d = 3.14; // double stands for "double-precision floating point number"
    cout << d << endl;

    // single characters live in the char type
    // you have to use 's to denote a char
    char c = 'c';
    cout << c << endl;

    return 0;
}