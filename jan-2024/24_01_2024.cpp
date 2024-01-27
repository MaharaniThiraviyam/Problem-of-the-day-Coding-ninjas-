//termsOfAP
#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.
    vector <int> res;
    int counter=0;
    for(int i=1; counter != x; i++) {
        int temp = (3*i) + 2;
        if(temp%4 != 0) {
            res.push_back(temp);
            counter++;
        }
    }
    return res;
}
