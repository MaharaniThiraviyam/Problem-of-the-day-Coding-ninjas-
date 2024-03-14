//Klargest
#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &arr, int K, int n) {
    // Write your code here
    sort(arr.begin(), arr.end());

    vector<int> res;
    for (int i = arr.size() - 1; i >= max((int)arr.size() - K, 0); --i) {
        res.push_back(arr[i]);
    }
    reverse(res.begin(), res.end());
    return res;
}
