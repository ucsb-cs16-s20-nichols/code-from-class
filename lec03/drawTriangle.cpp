#include <iostream>
#include <cstdlib>
using namespace std;

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

    // draw an n * n square of '*' characters
    // this outer loops makes sure to print n lines of (n stars)
    for (int i = 0; i < n; i++) { // iterate n times the outer loop
        // this inner loop worries about printing a single line
        for (int j = 0; j < i+1; j++) { // iterate i times the inner loop
            cout << "* ";
        }
        cout << '\n';
    }

    // in the loop above, i and j range between all values,
    // starting at (0, 0), (0, 1), ... (0, n-1),
    // (1, 0), (1, 1), ... (1, n-1),
    // ... (n-1, n-1)
    // So, we produce all pairs between (0, 0) and (n-1, n-1)

    return 0;
}