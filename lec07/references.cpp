#include <iostream>
using namespace std;

void increment_val(int y) {
    y++;
}

// int &y means that y is a "reference" to an int
void increment_ref(int &y) {
    y++;
}

int main(int argc, char *argv[])
{
    int x = 42;
    increment_val(x); // call-by-value copies stuff
    cout << x << endl;
    increment_ref(x); // call-by-reference changes stuff
    cout << x << endl;

    return 0;
}
