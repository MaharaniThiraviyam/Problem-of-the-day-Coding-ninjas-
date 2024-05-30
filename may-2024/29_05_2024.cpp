//largestElement
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max=0;
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}
