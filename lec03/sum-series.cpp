#include <iostream>
#include <cstdlib>
using namespace std;

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

    double sum = 0.0;

    // calculate the series sum using a loop
    for (int i = 1; i <= n; i++) {
        // i will go from 1 to 2 to 3 ... to n
        // sum = sum + 1/static_cast<double>(i);
        sum += 1/static_cast<double>(i);
    }

    cout << sum << endl;

    return 0;
}