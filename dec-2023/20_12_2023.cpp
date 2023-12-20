//Turbulent Hills 
#include <bits/stdc++.h> 
int longestDangerousRange(vector<int>& height, int n)
{   
    // Write your code here
    int res = 0, i, increasing =1, decreasing =1;
    for(i=1; i<n; i++) {
       if(height[i] > height[i-1]) {
           increasing = decreasing + 1;
           decreasing = 1;
       }
       else if(height[i] < height[i-1]) {
           decreasing = increasing + 1;
           increasing = 1;
       }
       else {
           increasing = 1;
           decreasing = 1;
       }
      
        if(res > increasing && res > decreasing) {
          return res;   
        }
        else {
            if(increasing > decreasing) {
                res = increasing;
            } else {
                res = decreasing;
            }
        }
    }

    return res;
}
