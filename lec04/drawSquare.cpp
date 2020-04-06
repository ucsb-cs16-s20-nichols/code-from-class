#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// declare drawSquare
string drawSquare(int n);

int main(int argc, char *argv[]) {
    // get the width from the user
    int n;
    cout << "Enter the width of the square\n";
    cin >> n;

    // call the drawSquare function to help output the square
    cout << drawSquare(n) << endl;

    return 0;
}

// define drawSquare
string drawSquare(int n) {
    string result = ""; // keep adding up character into this string

    // draw an n * n square of '*' characters
    // this outer loops makes sure to print n lines of (n stars)
    for (int i = 0; i < n; i++) { // iterate n times the outer loop
        // this inner loop worries about printing a single line of n stars
        for (int j = 0; j < n; j++) { // iterate n times the inner loop
            result = result + "* ";
        }
        result += '\n';
    }

    return result;
}
