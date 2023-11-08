#include <bits/stdc++.h> 
long long sumOfSquares(int n)
{
   if(n==1) {
       return 1;
   }
   else {
    return (n* (n+1) * ((2*n)+1)) /6;
   }

}
