#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int main() {
    int result = 0;
    int x = 10, y = 20;
    result = sum(x, y);
    cout << result << endl;

    return 0;
}