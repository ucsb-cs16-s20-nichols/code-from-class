#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    int n = -5;

    for(int x = 0; x < n; x++) {
        cout<<x <<endl;
    }

    cout << "\n---\n";

    int x = 0;
    while(x < n) {
        cout<< x << endl;
        x++; 
    }

    cout << "\n---\n";

    int y = 0; 
    do {
        cout<< y << endl;
        y++;
    } while(y < n);

    return 0;
}
