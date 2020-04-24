#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // "arr" by itself is a pointer to the first
    // element
    int arr[]={50, 60, 70};

    // the following would be an array of *pointers* to 
    // each of the consecutive elements of arr
    // int *arr2[] = {&arr[0], &arr[1], &arr[2]};

    for (int i = 0; i < 3; i++) {
        // print the address of arr[i]
        cout << &arr[i] << endl;
    }
    cout << "\n";

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    int *p;
    p = arr; // p is the address of the first element of arr
             // (i.e., p = &arr[0])
    p = p + 1; // really adds 4 bytes because the 
               // compiler is nice to us and know 
               // how "wide" an int is
    *p = *p + 1; // follow p, and set the memory there
                 // to be the result of adding 1 to 
                 // whatever was already at that memory 
                 // location
    // so this last line sets arr[1] = arr[1] + 1


    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

