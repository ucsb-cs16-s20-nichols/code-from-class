#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = 5;
    double d = n; // converting n to a double, implicitly
    cout << d << endl; 

    bool b = true;
    int x = b; // converting b to an int, implicitly
    cout << x << endl;

    double pi = 3.14;
    // takes pi and explicitly converts it to an int
    int y = static_cast<int>(pi); 
    cout << y << endl;

    double one_third_fail = 1 / 3; // this is performing "integer division"
    // because 1 is an int, and so is 3
    // if we want floating point division, we have to set the 
    // left or the right argument of / to be a f.p. #
    cout << one_third_fail << endl;

    double one_third = 1.0 / 3;
    cout << one_third << endl;

    double one_third2 = 1 / 3.0;
    cout << one_third2 << endl;

    double one_third3 = static_cast<double>(1) / 3;
    cout << one_third3 << endl;

    int one_third4 = 1.0 / 3;
    cout << one_third4 << endl;

    return 0;
}