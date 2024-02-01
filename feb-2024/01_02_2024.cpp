//divideByFour

#include <bits/stdc++.h> 
#include <vector>
void divideByFour(vector<int> &arr){
    // Write your code here.
    for(int i=0; i<arr.size(); i++) {
        int quotient = arr[i]/4;
        arr[i] = quotient == 0? -1 : quotient;
    }
}
