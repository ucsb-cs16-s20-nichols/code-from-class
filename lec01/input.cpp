#include <iostream> // for cout and cin
using namespace std; // so I don't have to keep std::

int main() {

    int x;
    cout << "Enter a number please: ";
    // << for output because information is being given TO cout
    cin >> x; // get the number from the user
    // >> for input because information is being taken FROM cin to give to x

    cout << "You typed " << x << "!\n";

    return 0;
}