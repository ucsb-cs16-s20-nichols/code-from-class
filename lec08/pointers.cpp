#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int *p, y;

    cout << "p: " << p << endl;
    // dereferencing p when it points to garbage
    // will mostly likely result in a runtime error
    // because you probably don't have access to 
    // whatever random address that p holds initially
    // cout << "*p: " << *p << endl;
    cout << "y: " << y << endl;

    
    y = 3;
    p = &y; // p now holds the address of y

    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "y: " << y << endl;

    // follow the pointer and set the value
    // that is at that address
    // equivalent to "y = 5;"
    *p = 5;

    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "y: " << y << endl;

    return 0;
}