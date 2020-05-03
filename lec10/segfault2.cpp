/*

lawtonnichols:08-01/ (master*) $ g++ -g segfault2.cpp -o segfault2
lawtonnichols:08-01/ (master*) $ lldb segfault2             [12:19:34]
(lldb) target create "segfault2"
Traceback (most recent call last):
  File "<input>", line 1, in <module>
  File "/usr/local/Cellar/python@2/2.7.16/Frameworks/Python.framework/Versions/2.7/lib/python2.7/copy.py", line 52, in <module>
    import weakref
  File "/usr/local/Cellar/python@2/2.7.16/Frameworks/Python.framework/Versions/2.7/lib/python2.7/weakref.py", line 14, in <module>
    from _weakref import (
ImportError: cannot import name _remove_dead_weakref
Current executable set to 'segfault2' (x86_64).
(lldb) run
Process 74354 launched: '/Users/lawtonnichols/Desktop/cs16/Summer-2019/code-from-class/08-01/segfault2' (x86_64)
Process 74354 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = EXC_BAD_ACCESS (code=1, address=0x0)
    frame #0: 0x0000000100000cb1 segfault2`main(argc=1, argv=0x00007ffeefbfeca8) at segfault2.cpp:8:13
   5    {
   6        int *p; // p is undefined
   7
-> 8        cout << *p << endl;
   9
   10       return 0;
   11   }
Target 0: (segfault2) stopped.
(lldb) print p
(int *) $0 = 0x0000000000000000
(lldb) quit
Quitting LLDB will kill one or more processes. Do you really want to proceed: [Y/n] y

*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int *p; // p is undefined -- we don't have access to whatever this addr is

    cout << *p << endl;

    return 0;
}