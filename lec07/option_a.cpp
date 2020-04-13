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

    string line;
    while (1) {
        getline(ifs, line);
        if (!ifs) break;
        cout << line << endl;
    }

    // Close the file
    ifs.close();
    return 0;
}