//Sum of even numbers till N
#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
    // Write your code here.
    long long res = 0;
    for(int i=2; i<=n; i+=2) {
        res += i;
    }
    return res;
}
