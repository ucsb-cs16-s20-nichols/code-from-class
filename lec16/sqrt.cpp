#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


double my_sqrt(double x) {
  if (x < 0) {
    cerr << "negative number!\n";
    return -1;
  }

  // guess between 0 and x
  double lo = 0;
  double hi = max(1.0, x);
  while (lo < hi) {
    double mid = (hi + lo) / 2.0;
    // if we're really close to the solution, we're good!
    if (abs(mid * mid - x) < 0.0000001) {
      // we found the answer!
      return mid;
    } else if (mid * mid > x) {
      // our guess was too big
      hi = mid;
    } else {
      // our guess was too low
      lo = mid;
    }
  }

  // we should never get here
  return -1;
}

int main(int argc, char *argv[])
{
  cout << my_sqrt(2.0) << endl;

  return 0;
}
