//Periodic String 
#include <bits/stdc++.h> 
bool isPeriodic(string s) {
    // Write your code here.
    int n = s.length();
    bool result;

    for(int i=1; i<=n/2; i++) {
        result = true;
        for(int j=0; j<n-i; ++j) {
            if(s[j] != s[j+i]) {
                result = false;
                break;
            }
        }

        if(result) {
            return true;
        }
    }

    return false;
}
