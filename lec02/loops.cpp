#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 10) {
        cout << i << endl;
        i++; // equivalent to i = i + 1;
    }

    cout << endl << endl;

    // the for loop below is exactly equivalent to the while loop above

    // for (initialization; condition; update)
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    // initialization happens only once
    // then you repeatedly check the condition, execute the body,
    // and then execute the update statment

    return 0;
}