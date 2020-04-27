#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
}; // <--- watch out for this semicolon!

// it's a good idea for this function to never be allowed to change
// p
// The point that you pass along will "up-converted" to a const.
// So don't think you can only ever pass a const variable to this function.
// It'll treat *any* Point as a constant for the body of this function.
void printPointByReference(const Point &p) {
    p.x = 5; // we don't want to be able to do this
    cout << "(" << p.x << ", " << p.y << ")\n";
}

const double sqrt_2 = 1.414;

int main(int argc, char *argv[])
{
    // you can put const before any type, and that makes
    // the variable a constant (i.e., one that can't be changed)

    const double pi = 3.1415926535;

    // compiler error! you can't change this
    pi = 3;

    return 0;
}
