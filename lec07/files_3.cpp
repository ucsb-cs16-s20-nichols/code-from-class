#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;

    // Open a file for reading
    ifs.open("parrot_sketch.txt");
    // open will fail if file does not exist
    // but your program will not crash
    if (!ifs) {
        cerr << "Open failed" << endl;
        return 1; // returning from main is the same as calling exit(1);
    }

    int numparrots = 0;
    char response = '\n';

    string line;

    // we'll ask the user whether they want us to count the parrots in the next line by having
    // them enter \n to continue, or something else to stop

    while (response == '\n') {
        getline(ifs, line);//read the next line 
        //and strip the line of the new line character
        if(!ifs)
            break;
        cout << line << endl; //process the line
        // strings have a .find method that will
        // return the index of the string you searched
        // for if it exists, -1 otherwise
        int pos = line.find("parrot");
        // find return the index of the *first*
        // occurrence of the search string in the given string
        cout << pos << endl;
        if (pos >= 0) {// Found the word "parrot" in the line
            numparrots++;
        }
        // given a file or an input stream like cin,
        // ___.get() gets a single character from that input
        response = cin.get(); // *mostly* equivalent to cin >> response; <-- This skips whitespace, which isn't what we want here
    }

    cout << "Number of lines that included 'parrot': "
         << numparrots << endl;


    // Close the file
    ifs.close();
    return 0;
}