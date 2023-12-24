// Cherry Biscuit 
#include <bits/stdc++.h> 
int cherryBiscuit(vector<int> &a, int n, int k) {
    // Write your code here.
    int counter = 0;
    for(int i=0; i<n; i++) {
        if(a[i] > k) {
            counter++;
        }
    }
    return counter;
}
