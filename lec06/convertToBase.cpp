#include <iostream>
using namespace std;

string convertToBase(int decimalNumber, int base) {
    if (decimalNumber == 0) {
        return "0";
    }
    if (decimalNumber < 0) {
        return "This algorithm doesn't work for negatives!";
    }

    string result = "";

    // digits[i] = the character I want
    string digits = "0123456789ABCDEF";

    while (decimalNumber != 0) {
        // mod by the base to get the next digit (rightmost)
        int nextDigit = decimalNumber % base;
        result = digits[nextDigit] + result;
        // integer divide to get the "shifted" number to find the
        // next digit in
        decimalNumber = decimalNumber / base;
    }

    return result;
}

int main() {
    int n, b;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a base: ";
    cin >> b;

    cout << n << " in base " << b << " is " << convertToBase(n, b) << endl;
    
    return 0;
}