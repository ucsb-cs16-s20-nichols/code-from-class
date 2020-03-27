#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    // now n is initialized
    if (n % 3 == 0) {
        cout << "fizz\n";
    } else {
        cout << n << endl;
    }

    return 0;
}