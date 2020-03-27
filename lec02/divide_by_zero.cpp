#include <iostream>
using namespace std;

int main() {
    int x;
    
    cout << "Please enter a number: ";
    cin >> x;
    // now x is filled with a value
    cout << 1 / x << endl;

    // this causes a run-time error!
    // The compiler didn't catch this because
    // it's only an error when you enter 0.

    return 0;
}