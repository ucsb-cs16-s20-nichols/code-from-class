#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // a dynamic array is one that is made on the heap
    int *arr = new int[42]; // this makes an array of 42 ints on the heap
    // it gives us back a **pointer** to the first element of that array

    int *new_int = new int; // this is a single int on the heap
    // it's not an array--it's just a pointer to a single int

    arr[5] = 7;
    arr[5]++;
    arr[0] = 0;

    // to delete an array on the heap, remember to use delete[]
    delete[] arr;
    // delete arr; <-- mistake! this will only delete the first element of arr

    delete new_int;

    return 0;
}
