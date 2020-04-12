#include <iostream>
using namespace std;

int f(int x = 3) {
    return x + 1;
}

int main() {
    cout << f(0) << endl;
    cout << f(1) << endl;

    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;


    return 0;
}