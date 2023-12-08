//Find The Nearest Supporter

#include <bits/stdc++.h> 
vector<int> prevSmall(vector<int> arr, int n) {
    // Write your code here.
    int i, temp = 0, prev=0;
    for(i=0; i<n; i++) {      
        if(i == 0) {
            temp = arr[i];
            arr[i] = -1;
        }
        else {
            if(temp < arr[i]) {
              prev = arr[i];
              arr[i] = temp;
              temp = prev;
            }
            else {
               temp = arr[i];
               if(arr[i-1] != -1) {
                   arr[i] = arr[i-1];
               }
               else {
                   arr[i] = -1;
               }
            }
        }
    }
    return arr;
}
