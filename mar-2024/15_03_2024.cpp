//Find Integer
#include <bits/stdc++.h>
int findInteger(int n, int k) {
  // Write your code here
    int mid = (n+1)/2;
    if (k <= mid){
        return (2*(k-1))+1;
    }
    else {
        return (2*(k-mid));
    }
}
