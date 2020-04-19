#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

string translate(string word) {
    if (word == "snow") {
        return "nieve";
    } else if (word == "mountain") {
        return "山";
    } else if (word == "kingdom") {
        return "Königreich";
    } else {
        return word;
    }
}

int main() {
    ifstream ifs;
    ifs.open("lyrics.txt");

    // get a word at time from the file, and 
    // translate it if we know how to
    while (true) {
        string word;

        // if you use ifs like you would with cin, if you give it
        // a string variable to read into, it'll place a single
        // word in it at time
        ifs >> word;

        // check to see if our read from the file was unsuccessful
        // (i.e., we read past the end of the file)

        if (!ifs) {
            break;
        }

        cout << translate(word);

        // let's get the whitespace and output that back
        // while the next characters in ifs are whitespace,
        // read them in (to advance the cursor) and 
        // output those same whitespace characters
        while (isspace(ifs.peek())) {
            // read it
            char space_char = ifs.get(); // advance the cursor
            // output it right back out
            cout << space_char;
        }
    }

    ifs.close();
    return 0;
}