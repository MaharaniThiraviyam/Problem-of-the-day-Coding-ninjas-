#include <bits/stdc++.h> 
vector<int> nextGreaterElement(vector<int>& arr, int n){
    // Write your code here.
    int temp = 0;
    for(int i=0; i<n; i++) {
        temp = 0;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
              temp = arr[j];
              break;
            }
        }

        if(temp > 0) {
            arr[i] = temp;
        }
        else {
            arr[i] = -1;
        }
        
    }
    return arr;
}
