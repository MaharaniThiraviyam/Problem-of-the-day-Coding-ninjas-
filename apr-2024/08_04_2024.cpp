//Find Set Bit Position
#include <bits/stdc++.h> 
int findSetBit(int N) {   
    // Write your code here
    int count = 1;
    for(; N>0; N/=2, count++) {
        if(N%2 == 1) {
            if( count == 1) {
                count = -1;
            }
            return count;
        }
    }
    return -1;
}
