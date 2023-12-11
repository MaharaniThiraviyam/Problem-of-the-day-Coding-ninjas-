//Ninja And His Old Friends 
#include <bits/stdc++.h> 
int shakeHands(vector<int> &friends ,int n, int k)
{
    // Write your code here.
    int i;
    for(i=0; i<n; i++) {
        if(friends[i] == k) {
            k *= 2;
        }
    }
    return k;
}
