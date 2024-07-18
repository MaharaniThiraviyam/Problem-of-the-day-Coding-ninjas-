//largestPrimeFactor

#include<cmath>
#include <bits/stdc++.h> 
int largestPrimeFactor(int n) {
    // Write your code here
    long long max_prime = -1;

    while(n%2 == 0) {
        max_prime = 2;
        n/=2;
    }

    for(long long i=3; i<=sqrt(n); i+=2) {
        while(n%i == 0) {
            max_prime = i;
            n/=i;
        }
    }

    if(n>2) {
        max_prime = n;
    }
    return max_prime;
}
