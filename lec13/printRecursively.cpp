#include <iostream>
using namespace std;

// prints 1\n2\n...\nN\n
void printFrom1ToN(int N) {
    // invalid case: N is negative
    if (N < 0) {
        cerr << "N can't be negative!!!" << endl;
        return;
    }

    // base case <-- N == 0; do nothing!
    if (N == 0) return;

    // otherwise, we're in the recursive case
    // break the problem down into:
    // call printFrom1ToN(N-1) <-- assume this works, and it'll print from 1 to N-1
    // then, finally, print N
    printFrom1ToN(N-1);
    cout << N << endl;
}

// prints N\nN-1\nN-2\n...\n1\n
void printFromNTo1(int N) {
    // invalid case: N is negative
    if (N < 0) {
        cerr << "N can't be negative!!!" << endl;
        return;
    }

    // base case <-- N == 0; do nothing!
    if (N == 0) return;

    // otherwise, we're in the recursive case
    // break the problem down into:
    // first, print N
    // call printFromNTo1(N-1) <-- assume this works, and it'll print from N-1 to 1
    cout << N << endl;
    printFromNTo1(N-1);
}

void printArrayRecursively(int *arr, int size) {
    if (size == 0) return;

    // recursive case
    cout << arr[0] << endl;
    printArrayRecursively(arr+1, size-1);
}

int main(int argc, char *argv[])
{
    printFrom1ToN(5);

    cout << endl;
     
    printFrom1ToN(-5);

    cout << endl;

    printFromNTo1(5);

    cout << endl;

    // let's print the elements of the array {2, 3, 4, 5} recursively
    int arr[] = {2, 3, 4, 5};
    printArrayRecursively(arr, 4);

    return 0;
}
