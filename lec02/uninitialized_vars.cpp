#include <iostream>
using namespace std;

int main() {
    int a, b; // declared, but un-initialized
    // a and b will hold garbage memory values

    cout << "The sum of " <<  a  <<  " and "  <<  b <<  " is:" 
         <<  a+b << endl;

    return 0;
}