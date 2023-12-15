// Set Bits 
#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
//Write your countBits function here
int countBits(int num) {
    int result = 0;
    for(; num>0; num/=2) {
        if((num%2) == 1) {
            result += 1;
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
