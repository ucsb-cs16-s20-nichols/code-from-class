#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

int countVowels(char *s) {
    // a vowel is any of {a, e, i, o, u}
    // we'll count how many of these are in the string s

    int count = 0;
    
    // for (int i = 0; i < strlen(s); i++) {
    //     char c = tolower(s[i]);
    //     if (c == 'a' || c == 'e' || c == 'i' || 
    //         c == 'o' || c == 'u') {
    //         count++;
    //     }
    // }

    int i = 0;
    while (s[i] != '\0') {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u') {
            count++;
        }
        i++;
    }

    return count;
}

string removeSpaces(const string &s3) {
    string result = "";
    
    for (int i = 0; i < s3.length(); i++) {
        if (!isspace(s3[i])) {
            // keep it
            result = result + s3[i];
        }
    }

    // if you compile with -std=c++11 or later, you can do this:
    /*for (char c : s3) {
        if (!isspace(c)) {
            // keep it
            result = result + c;
        }
    }*/

    return result;
}

int main(int argc, char *argv[])
{
    char s1[] = "Hello, world!\n";
    char s2[] = "HELLO, WORLD!\n";
    cout << countVowels(s1) << endl;
    cout << countVowels(s2) << endl;

    string s3 = "a b\tc\nd e";
    cout << removeSpaces(s3) << endl;
    
    return 0;
}
