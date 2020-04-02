#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    cout << endl;

    int i = 1;
    while (i <= 10) {
        cout << i << endl;
        i++;
    }

    cout << endl;

    int j = 11;
    do {
        cout << j << endl;
        j++;
    } while (j <= 10);

    return 0;
}
