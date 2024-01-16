// No Adjacent Same 
#include <bits/stdc++.h> 
bool checkBits(unsigned int n) {
    // Write your code here.
    int res=-1, rem;
    for(; n>0; n=n/2) {
        rem = n%2;
        if(res == rem) {
            return false;
        }
        res = rem;
    }

    return true;
}
