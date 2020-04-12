// this #ifndef stuff makes sure that hello.h is only ever included
// once in your files. It's possible to get into infinite loops of
// inclusion, and this stops that from happening.

#ifndef HELLO_H_ // if this special compiler variable doesn't exist
// only then include the contents of hello.h
#define HELLO_H_

#include "hello.h" // uh oh
// but this is okay now because we wrapped this entire file in a
// compiler-level if statement

#include <iostream>
using namespace std;

void printHello();

#endif