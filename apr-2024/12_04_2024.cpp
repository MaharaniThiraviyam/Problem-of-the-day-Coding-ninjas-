//Complete Sum 
#include <bits/stdc++.h> 
vector<int> completeSum(vector<int> &a, int n) {
    // Write your code here.
    int total = 0;
    for(int i=0; i<n; i++) {
        total += a[i];
        a[i] = total;
    }
    return a;
}


