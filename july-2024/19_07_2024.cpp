//sortArray0,1,2
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int zeros_count=0, ones_count=0, twos_count=0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0) {
            zeros_count++;
        }
        else if(arr[i] == 1) {
            ones_count++;
        }
        else if(arr[i] == 2) {
            twos_count++;
        }
    }

    for(int i=0; i<n; i++) {
        if(zeros_count > 0) {
            arr[i] = 0;
            zeros_count--;
        }
        else if(ones_count > 0) {
            arr[i] = 1;
            ones_count--;
        }
        else if(twos_count > 0) {
            arr[i] = 2;
            twos_count--;
        }
    }
}
