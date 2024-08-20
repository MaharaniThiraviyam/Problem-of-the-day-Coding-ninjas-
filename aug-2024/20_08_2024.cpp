//NthRoot
#include <cmath>
int NthRoot(int n, int m) {
  // Write your code here.

  if(m == 1)
    return 1;

  int low=1, high=m;
  while(low<=high) {
    int mid = low + (high-low)/2;
    long long int mid_power = pow(mid, n);

    if(mid_power == m) {
      return mid;
    }
    else if(mid_power < m) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return -1;
}
