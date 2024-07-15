//evenSumTillN

#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
    // Write your code here.
    long long result = 0;
    for(int i=2; i<=n; i+=2)  
    result+=i;
    return result;
}
