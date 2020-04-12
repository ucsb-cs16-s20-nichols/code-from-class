#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 10; i++) {
        if (i == 9) {
            break; // stop the loop before printing 9
        }

        cout << i << endl;
    }

    cout << endl;

    int i = 1; 
    while (i <= 10) {
        if (i == 9) {
            i++;
            continue; // don't print out 9, but continue with the loop
            // (so we can still print out 10)
        }

        cout << i << endl;
        i++;
    }

    return 0;
}