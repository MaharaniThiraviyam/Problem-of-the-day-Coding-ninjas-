//concatLargestDigit

#include <bits/stdc++.h> 
int concatLargestDigit(int a, int b, int c) {
    // Write your code here
    int res = 0;
    int max = 0;
    for(; c>0; c/=10) {
        if((c%10) >max) {
            max = c%10;
        }
    }
    res = max ;

    for(max=0; b>0; b/=10) {
        if((b%10) > max) {
            max = b%10;
        }
    }
    res = (max *10) + res;

    for(max=0; a>0; a/=10) {
        if((a%10 > max)) {
            max = a%10;
        }
    }

    res = (max * 100) + res;
    
    return res;
}
