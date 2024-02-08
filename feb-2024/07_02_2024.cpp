//findLeaders

#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &arr, int n) {
    // Write your code here.
    vector<int> res;
    int max_exists;
    for(int i=0; i<n; i++) {
        max_exists = 0;
        for(int j=i+1; j<n; j++) {
            if(arr[j]>=arr[i]) {
                max_exists = 1;
            }
        }

        if(max_exists == 0) {
            res.push_back(arr[i]);
        }
    }
    return res;
}
