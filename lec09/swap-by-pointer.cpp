#include <iostream>
using namespace std;

// this kind of parameter passing is called
// "call-by-address" or "call-by-pointer". 
// x and y are pointers to of a and b
void swapAddress(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp; 
}

// when you call swap, imagine that x and y are local variables
// that are set to the arguments that you pass along
// so, in the case of the function above, pretend that there are
// two extra lines at the start of the function that say:
// int *x = &a;
// int *y = &b;

int main() {
    int a=30, b=40;
    swapAddress(&a, &b); 
    cout << a << " " << b << endl;

    return 0;
}
