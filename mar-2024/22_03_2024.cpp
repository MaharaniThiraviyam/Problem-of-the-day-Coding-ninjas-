//middleOfThree
#include <bits/stdc++.h> 
int middleOfThree(int x, int y, int z)
{
    // Write your code here   
    if((x<y && x>z) || (x>y && x<z)) {
        return x;
    }
    else if((x<y && y<z) || (x>y && y>z)) {
        return y;
    }
    else {
         return z;
    }
}
