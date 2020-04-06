#include "tdd.h"

// let's make an "assertion" function--it checks (i.e., asserts) that
// a certain boolean-valued property was true
void assertTrue(string nameOfTest, bool property) {
    if (!property) {
        cerr << "Test failed: " << nameOfTest << endl;
    } else {
        cout << "Test passed: " << nameOfTest << endl;
    }
}