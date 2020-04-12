//Writing to files
#include <iostream>
#include <fstream> // this gives me ofstream and ifstream
#include <cstdlib>
using namespace std;

int main()
{
    // ofstream is for output (writing to a file)
    ofstream ofs;
    // Open a file for writing
    // if animals.txt didn't exist already,
    // this line would make it
    // And if it did exist it would overwrite it!
    ofs.open("animals.txt");

    // ofs, interpreted as a boolean represents whether or not
    // anything went "wrong"
    if (!ofs) {
        // maybe we couldn't open the file
        exit(1);
    }

    // by default, ofstreams *overwrite* the file

    // Write to it
    ofs << "Duck\nCow\nGoat\nParrot\n";

    // Close the file
    ofs.close();

    // *technically*, the program is about to end and the file will get closed automatically
    // but we are good programmers

    return 0;
}