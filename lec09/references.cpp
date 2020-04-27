#include <iostream>
using namespace std;

int main() { 
    int d = 5; 
    int & e = d; 
    int f = 10; 
    e = f;

    d = 6;
    e = 7;
    f = 8;

    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;

    int a = 5;
    int &b = a; // ampersand in the type means reference
    int *pt1 = &a; // ampersand in an expression means address-of

    // a and b are the same "box"
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    return 0;
}