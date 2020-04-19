#include <iostream>
using namespace std;

// remember to always pass along the size of the array
void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// passing arrays allows them to be modified
void incrementBy10(int a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i] += 10; // this is changing the array you passed in!
    }
}

int main(int argc, char *argv[])
{
    int arr[] = {10, 20, 50};
    // you can use [] when you give the values--it'll set the size to 3

    for (int i = 0; i < 3; i++) {
        arr[i] += 10;
    }

    // pass the array by saying its name (without any [] or #s)
    printArray(arr, 3);

    incrementBy10(arr, 3);
    printArray(arr, 3);

    // let's get the avg of the midterms
    double scores[] = {10, 20, 30, 40, 50};
    // iterate through scores to calculate the avg
    double sum = 0.0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    double avg = sum / 5;
    cout << "average: " << avg << endl;

    return 0;
}
