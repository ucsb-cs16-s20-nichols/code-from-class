#include <iostream>
using namespace std;

// computes m^n
int pow(int m, int n) {
    // base case
    if (n == 0) return 1;
    else return m * pow(m, n-1);
}

int main() {
    cout << pow(2, 5) << endl;
}