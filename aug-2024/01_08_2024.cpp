//checkMeta
#include <bits/stdc++.h> 
bool checkMeta(string &str1, string &str2)
{
    // Write your code here.

    int n = str1.size();
    if(n != str2.size()) {
        return false;
    }

    vector<int> diff_index;
    for(int i=0; i<n; i++) {
        if(str1[i] != str2[i]) {
            diff_index.push_back(i);
        }
    }

    if(diff_index.size() != 2) {
        return false;
    }

    int i1 = diff_index[0];
    int i2 = diff_index[1];
    return (str1[i1] == str2[i2] && str1[i2] == str2[i1]);
}
