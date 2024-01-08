//majorityElementII
#include <bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> res;
    int count = floor((arr.size())/3);
    
    int test_arr[10] = {0}, i;

    for(i=0; i<arr.size(); i++) {
        test_arr[arr[i]] += 1;
    }

    for(i=0; i<100000; i++) {
        if(test_arr[i] > count) {
            res.push_back(i);
        }
    }
    return res;
}
