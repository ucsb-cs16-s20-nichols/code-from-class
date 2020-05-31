#include <iostream>
#include <vector>
using namespace std;

// return back the index if the value existed in the vector/array
// otherwise return -1
int binarySearch(const vector<int> &v, int value) {
  // start in the middle
  int low = 0;
  int high = v.size() - 1;
  
  // keep halving the search space while there still is a search space
  while (low <= high) {
    int mid = (low + high) / 2; // look in the middle
    // see if we found what we were looking for
    if (v[mid] == value) {
      return mid; // we found it! We're done!
    } else if (v[mid] < value) {
      // the search space needs to change--we guessed too low
      low = mid + 1;
    } else {
      // we know that v[mid] > value
      // we guessed too high
      high = mid - 1;
    }
  }

  // if we get here, we were out of luck
  return -1; // we couldn't find what we were looking for
}

int main(int argc, char *argv[])
{
  // instead of int arr[] = {1,2,3}; // I'm stuck with a vector of size 3!
  vector<int> v = {10, 20, 30}; // I can add to this!
  v.push_back(40);
  v.push_back(50);
  v.push_back(60);
  v.push_back(70);
  v.push_back(80); // now the vector is size 8!

  cout << binarySearch(v, 50) << endl;

  return 0;
}
