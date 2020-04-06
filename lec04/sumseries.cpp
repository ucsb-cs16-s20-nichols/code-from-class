#include <iostream>
#include <cstdlib>
using namespace std;

// let's make a function called sum that sums the series! (given n)

// let's declare the function
double sum(int n);

// ./foo 42 ==> argv = ["./foo", "42"]
int main(int argc, char *argv[]) {
    // get a number from the command line arguments

    // make sure we were given the right # of cmd line arguments
    if (argc != 2) {
        cerr << "You gave us the wrong # of command line arguments!\n";
        cerr << "Usage: " << argv[0] << " n\n";
        // stop the program here
        exit(1);
    }

    int n = atoi(argv[1]);

    // call the function sum
    cout << "Sum of the first 2 terms is : " << sum(n) << endl;

    return 0;
}

// define the function sum
double sum(int n) {
    // s will hold the sum
    double s = 0.0;

    // calculate the series sum using a loop
    for (int i = 1; i <= n; i++) {
        // i will go from 1 to 2 to 3 ... to n
        // s = s + 1/static_cast<double>(i);
        s += 1/static_cast<double>(i);
    }

    // give back the final result to whoever called us
    return s;
}