// g++ centroid.cpp -o centroid -std=c++11

#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

Point centroid(Point *arr, int size) {
    // the centroid is (avg x val, avg y val)
    double avgX = 0.0, avgY = 0.0;
    for (int i = 0; i < size; i++) {
        avgX += arr[i].x;
        avgY += arr[i].y;
    }
    avgX = avgX / size;
    avgY = avgY / size;

    Point ret = {avgX, avgY};
    return ret;
}

void printPoint(const Point &p) {
    cout << "(" << p.x << ", " << p.y << ")\n";
}

int main() {
    // let's make an array of 3 Points on the heap
    // The type of an array of Points can look like
    // Point arr[] or Point *arr <-- these are equivalent!
    Point *arr = new Point[3];
    // now arr points the first element in that array on the heap
    arr[0] = {1, 1};
    arr[1].x = 2;
    arr[1].y = 2;
    arr[2] = {3, 4};

    // let's make a function to compute the "centroid" of the points
    printPoint(centroid(arr, 3));

    // now that I'm done with arr, let's delete it
    delete[] arr; // delete[] instead of delete for an array

    return 0;
}