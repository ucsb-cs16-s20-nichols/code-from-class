#include <iostream>
using namespace std;

void bar(int *j) {
    *j += 1;
}

void foo(int *i) {
    *i += 1;

    bar(i);
}

int* createAnIntOnTheHeap() {
    return new int;
}

int main() {
    int *p = createAnIntOnTheHeap(); // now I have an int on the heap
    *p = 42;

    foo(p); // this will give the heap variable to the foo function
            // and indirectly we give p to bar as well

    cout << *p << endl;
    
    delete p;

    return 0;
}