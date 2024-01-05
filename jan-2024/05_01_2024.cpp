// Check if the door is open or closed 
#include <bits/stdc++.h> 
string doorStatus(int n) {
    // Write your code here.
    char *res = new char[n + 1];
    int i,j;
    for(i=0; i<n; i++) {
        res[i] = '1';
    } 

    for(i=2; i<=n; i++) {
        for(j=i; j<=n; j++) {
            if(j%i == 0) {
                if(res[j-1] == '0') {
                    res[j-1] = '1';
                }
                else {
                    res[j-1] = '0';
                }
            }
        }
    }
   
    return res;
}
