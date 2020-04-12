// Reading from files
#include <iostream>
#include <fstream> // gives me ifstream
#include <string> // gives me getline

using namespace std;

int main()
{
    // ifstream is for input (reading from a file)
    ifstream ifs;

    // Open a file for reading
    ifs.open("animals.txt");

    // open will fail if file does not exist
    if (!ifs) {
        cerr << "Open failed" <<endl;
        return 1;
    }

    // now ifs is "true"

    // now the "cursor" is waiting at the start of the file to read stuff

    string line;

    // this loop reads a line at a time
    // and prints it back out
    // so really, it prints out the entire file

    while (1) {
        // getline takes the current line from ifs
        // and stores it into the line string variable
        getline(ifs, line); // this *sets* the line variable
        if(!ifs)    // we have to check right here, because once we read past the end of the file, 
            break;  // you won't get any new info to put in the line var.
        cout << line << endl; //process the line
    }

    // Close the file
    ifs.close();
    return 0;
}