#include <iostream>
using namespace std;

// global variable
// declared outside everything
int harryPotter = 7;

void gobletOfFire() {
    harryPotter++;

    // local variable
    int cedric = 10;
    // locals go away after functions return

    cout << cedric << endl;
}

int main() {
    cout << harryPotter << endl;
    gobletOfFire();
    cout << harryPotter << endl;

    // cout << cedric << endl;
    return 0;
}