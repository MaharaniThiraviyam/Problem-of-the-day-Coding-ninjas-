//shakeHands
#include <bits/stdc++.h> 
int shakeHands(vector<int> &friends ,int n, int k)
{
    // Write your code here.
    int i;
    for(i=0; i<n; i++) {
        if(friends[i] == k) {
            k += friends[i];
        }
    }
    return k;
}
