#include "tdd.h"


void assertTrue(string nameOfTest, bool property) {
    if (!property) {
        cerr << "Test failed: " << nameOfTest << endl;
    } else {
        cout << "Test passed: " << nameOfTest << endl;
    }
}