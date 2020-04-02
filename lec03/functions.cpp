#include <iostream>
using namespace std;

// absolute value function
// takes an int, returns an int
int absolute_value(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

// sum function
int sum(int x, int y) {
    return x + y;
}

// a function to print something
// it doesn't return anything, so its return "type" is "void"
void hello_world() {
    cout << "Hello world!\n";
}

int main(int argc, char *argv[])
{
    cout << "absolute value of -2 is: " << absolute_value(-2) << endl;

    cout << "sum of 2 and 3 is: " << sum(2, 3) << endl;

    hello_world();

    return 0;
}
