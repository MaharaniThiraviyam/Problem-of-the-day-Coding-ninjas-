#include <bits/stdc++.h> 
vector<int> nextGreaterElement(vector<int>& arr, int n){
    // Write your code here.
    for(int i=0; i < n; i++) {
        int greater_value = 0;

        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
              greater_value = arr[j];  
              break;
            }
        } 

        if(greater_value > 0) {
           arr[i] = greater_value;
        }
        else {
           arr[i] = -1;
        }
          
    }
    return arr;
}
