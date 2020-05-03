// gdb (lldb on a Mac)

// compile this program with the debug flag! (-g)
// g++ -g segfault1.cpp -o segfault1

// bash$ gdb segfault1

/*

(lldb) run
Process 74325 launched: '/Users/lawtonnichols/Desktop/cs16/Summer-2019/code-from-class/08-01/segfault1' (x86_64)
50
60
70
329711623
Process 74325 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = EXC_BAD_ACCESS (code=1, address=0x7ffeefc2f9ac)
    frame #0: 0x0000000100000c85 segfault1`main(argc=1, argv=0x00007ffeefbfeca8) at segfault1.cpp:19:13
   16           cout << arr[i] << endl; // arr[3] doesn't exist
   17       }
   18
-> 19       cout << arr[50000] << endl; // neither does arr[50000]
   20
   21       return 0;
   22   }
Target 0: (segfault1) stopped.
(lldb) print arr
(int [3]) $0 = ([0] = 50, [1] = 60, [2] = 70)
(lldb) print arr[3]
(int) $1 = 329711623
(lldb) print arr[4]
(int) $2 = -749421324
(lldb) print arr[50000]
error: Couldn't apply expression side effects : Couldn't dematerialize a result variable: couldn't read its memory


(lldb) quit
Quitting LLDB will kill one or more processes. Do you really want to proceed: [Y/n] y
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int arr[] = {50, 60, 70};

    for (int i = 0; i <= 3; i++) {
        cout << arr[i] << endl; // arr[3] doesn't exist
    }

    // a lot of the time, your program does "own" arr[3],
    // but it's undefined behavior to mess with it

    cout << arr[50000] << endl; // neither does arr[50000]

    return 0;
}