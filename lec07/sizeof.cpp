#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // the sizeof keyword (treat it like a function)
    // "returns" the # of bytes in a certain type
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(float) = " << sizeof(float) << endl;
    cout << "sizeof(bool) = " << sizeof(bool) << endl;

    return 0;
}
