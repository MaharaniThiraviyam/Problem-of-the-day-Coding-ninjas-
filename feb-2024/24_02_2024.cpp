//countBits
#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
//Write your countBits function here
int countBits(int n) {
    int counter = 0;
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        for(; n>0; n/=2) {
            if(n%2 == 1) {
                counter++;
            }
        }
    }
    return counter;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
