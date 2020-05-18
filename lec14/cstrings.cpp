#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    char s[] = "blah"; // this is implicitly a C string 
                       // (includes the '\0' for you)
    // exactly equivalent to:
    // char s[] = {'b', 'l', 'a', 'h', '\0'};
    char t1[] = {'a', 'b', 'c', 'd'}; // THIS IS NOT A C STRING
    char t2[100] = {'a', 'b', 'c', 'd', '\0'}; // THIS IS A C STRING
    // this string has length 4, but can hold up to 99 characters

    cout << s << endl;
    cout << t2 << endl;
    cout << t1 << endl; // undefined behavior -- read past the array 
                        // until it finds \0

    cout << strlen(s) << endl; // doesn't count '\0'

    strcat(t2, s); // t2 becomes t2 + s
    // "string concatenate"

    cout << t2 << endl;







    char s1[] = "Mark"; // the type of s1 is char * (equiv. to &s1[0])
    char s2[] = "Jill"; // the type of s2 is char *
    for (int i = 0; i <= 4; i++)
         s2[i] = s1[i];
    if (s1 == s2) {
        // pointer comparison will always be false here
        // s1 = "Art"; 
        cout << "it was true!\n";
    } 

    cout<<s1<<" "<<s2<<endl;

    return 0;
}