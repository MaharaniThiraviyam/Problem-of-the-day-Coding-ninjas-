//calculateSquare

#include <bits/stdc++.h> 
int calculateSquare(int num)
{
    //    Write your code here.
    int res=0;
    if(num < 0) {
        num = num + (num *-2);
        }
    for(int i=1;i<=num;i++) {
        res += num;
        
}
    return res;
}
