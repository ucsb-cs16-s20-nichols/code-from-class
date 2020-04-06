#include <iostream>
using namespace std;

int sum(int a, int b) {
    cout << a+b << endl;

    // there is no return here!
    // we'll get "undefined behavior", so any possible value
    // is returned here
    // it's random every time
}

int main() {
    int result = 0;
    int x = 10, y = 20;
    result = sum(x, y);
    cout << result << endl;

    return 0;
}