#include <iostream>
using namespace std;

// let's program factorial recursively
// "solving" for a factorial in terms of itself here
// means ***calling fact inside of fact***
// precondition: n >= 1
// postcondition: the returned value is n!
int fact(int n) {
    // check for stopping condition
    if (n == 1) {
        // base case
        return 1;
    } else {
        // recursive case
        return n * fact(n-1);
    }
}

int main(int argc, char *argv[])
{
    cout << fact(4) << endl;

    return 0;
}
