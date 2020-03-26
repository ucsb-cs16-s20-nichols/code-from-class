/*
To compile this program, find it by cd'ing to its directory.
Then, run "g++ simple.cpp -o simple"
The compiler's name is g++ --- it translates our C++ program
into a runnable machine code version.
"-o simple" says to compile the program into a file called "simple"
If we didn't say "-o simple", then the program would be called
a.out --- that's the default name.

To run a program that lives in the current directory, we say "./program"
Here, we'll do ./simple
*/

// This is a comment in C++
// It's a single-line comment

/*
This
is 
a 
multi-line
comment
*/

// every C++ program starts by calling the "main" function.
// You have to write a main function for your program to be correct.

// int stands for "integer"
// it is the "return type" of the main function
// The main function returns a number that indicates whether
// the program completed successfully.
// 0 stands for success, and any other number stands for failure
int main() {
    return 0;
}

// this program immediately ends by returning 0 to the terminal