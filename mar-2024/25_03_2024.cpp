//checkBits
#include <bits/stdc++.h> 
bool checkBits(unsigned int n) {
    // Write your code here.
    int temp = -1;
    for(; n>0; n/=2) {
        if(n%2 == temp) {
            return false;
        }
        temp = n%2;
    }
    return true;
}
