//missingNumber
#include <bits/stdc++.h> 
int missingNumber(vector<int> &arr, int n) 
{
    // Write your code here.
    int missingNum = arr[0];
    int diff = (arr[n-1] - arr[0])/n;
    for(int i=0; i<n; i++, missingNum+=diff) {
        if(missingNum != arr[i]) {
            return missingNum;
        }
    }
    return -1;
}
