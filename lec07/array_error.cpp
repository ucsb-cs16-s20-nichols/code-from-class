#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int arr[] = {1,2,3};

    cout << arr[3] << endl; // uh-oh!

    for (int i = 0; i <= 5000; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
        // uh-oh when i >= 3!

        // when i gets large enough, you will eventually
        // not have access to that memory address in your program

        // you'll get a runtime error when you try to access memory 
        // that doesn't belong to you
        // the name of that error is a "segmentation fault"
    }

    return 0;
}
