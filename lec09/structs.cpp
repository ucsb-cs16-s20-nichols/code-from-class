// compile this one with g++ -std=c++11 structs.cpp -o structs

#include <iostream>
using namespace std;

// let's make a brand new type called Point
// it'll hold an x value and a y value
struct Point {
    double x;
    double y;
}; // <--- watch out for this semicolon!

struct Box {
    Point ul;
    double width;
    double height;
};

void printPoint(Point p) {
    cout << "(" << p.x << ", " << p.y << ")\n";
}

// this one doesn't copy the Point
void printPointByReference(Point &p) {
    cout << "(" << p.x << ", " << p.y << ")\n";
}

void initPoint(Point &p2, int x, int y) {
    p2.x = x;
    p2.y = y;
}

int main(int argc, char *argv[]) {
    Point p1;
    // to get/set the x value for the Point p1, you use the . operator
    // the . goes inside the data structure
    // you do p1.x
    p1.x = 5;
    p1.y = 10; // now p1 = (5, 10)

    cout << "p1: " << "(" << p1.x << ", " << p1.y << ")\n";

    Point *q = &p1;
    // now we can indirectly access p1's x and y values
    // we have to do (*q) first to get the Point (i.e., follow the pointer)
    (*q).x = 6;
    (*q).y = 11;

    // the combination of * and . is so common that there's a shorthand for it
    // it's the -> operator
    // so (*q).x ≡ q->x (and both are ≡ to p1.x)
    // -> does the * and the . "at the same time"

    cout << "*q: " << "(" << q->x << ", " << q->y << ")\n";

    Box b;
    b.ul.x = 5; // ul doesn't make sense without the Box that it lives in

    Box b1 = {{500, 800}, 10, 20}; // the inner {}s are for the point, since that's the first thing in the Box

    Box b2, b3; 
    b2.ul = {500, 800}; // this doesn't work in versions of C++ before C++11
    // if you compile with -std=c++11 (or a future version)
    // Using the brace notation after a declaration is a new feature


    // print out p1 by passing it to a printPoint function
    printPoint(p1); // p1 is getting copied
    // Passing structs by value is potentially bad (since you can have
    // structs that take up a lot of memory)
    printPointByReference(p1);

    Point p2;
    initPoint(p2, 5, 7); // call our initPoint function
    // pass p2 by reference so that we can set its x to 5 and y to 7
    printPointByReference(p2);

    return 0;
}
