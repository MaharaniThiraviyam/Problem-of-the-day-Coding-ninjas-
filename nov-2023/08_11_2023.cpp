#include <bits/stdc++.h> 

int countOfDivisiblePairs(int n, int m){
    // Write your code here
    int counter = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if((i+j)%5 == 0) {
                counter += 1;
            }
        }
    }
    return counter;
}
