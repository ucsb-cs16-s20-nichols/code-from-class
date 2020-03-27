#include <iostream>
#include <cstdlib>
using namespace std;

/*
in C++, you have two options for the types of your main function
option 1: int main()
option 2: int main(int argc, char *argv[])
  argc: argument count
    - It's the number of space-separated "arguments" that you use when
      you run your program from the terminal.
    - The name of the program counts as one argument!
  argv: argument vector
    - It's the contents of your arguments
    - It's a list of the text of the your arguments

e.g., if I run the program as "./fizzbuzz-2.0 42 foo bar"
  - argc will be set to 4
  - argv will be set to ["./fizzbuzz-2.0", "42", "foo", "bar"]
    - remember that every element is a string!

*/
int main(int argc, char *argv[]) {

    if (argc != 2) {
        cout << "You should have called this program exactly like:\n";
        cout << argv[0] << " n" << endl;
        // let's stop the program now--we don't want to continue
        // return 1; // 1 because this wasn't a successful run of the program
        // this will stop the program
        // returning only stops the program if it's from main

        // exit will stop the program no matter what function you're in
        // it's one argument is the exit code to use
        exit(1); // lives in <cstdlib>
    }

    
    // int n = argv[1]; // this won't work because the types are wrong!
    // string vs. int
    // let's convert argv[1] into an integer using the atoi library function
    int n = atoi(argv[1]);
    // now n is initialized
    if (n % 3 == 0 && n % 5 == 0) {
        cout << "Fizzbuzz\n";
    } else if (n % 3 == 0) {
        cout << "Fizz\n";
    } else if (n % 5 == 0) {
        cout << "Buzz\n";
    } else {
        cout << n << endl;
    }

    return 0;
}