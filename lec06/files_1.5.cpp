// Appending to files
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream ofs;
    // Open a file for appending
    // Appending means adding to the end of an existing file
    ofs.open("animals.txt", ios::app);

    if (!ofs) {
        // maybe we couldn't open the file
        exit(1);
    }

    // Write to the end this time
    ofs << "Horse\n";
    
    // Close the file
    ofs.close();
    return 0;
}