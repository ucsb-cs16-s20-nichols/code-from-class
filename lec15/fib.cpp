#include <iostream>
using namespace std;

int fib(int n) {
    if (n < 0) {
        cerr << "n must be non-negative!!!\n";
    }

    // two base cases
    if (n == 0) return 0;
    else if (n == 1) return 1;

    // recursive case
    return fib(n-1) + fib(n-2);
}

int main() {
    cout << fib(7) << endl;
}