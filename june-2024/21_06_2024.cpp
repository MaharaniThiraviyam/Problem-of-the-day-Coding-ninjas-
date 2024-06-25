//boringFactorials
#include <bits/stdc++.h> 
int boringFactorials(int n, int p)
{
    // Write your code here.
    long long fact=1;
    for(int i=2; i<=n; i++) {
        fact *= i;
    }

    return (fact%p);
}
