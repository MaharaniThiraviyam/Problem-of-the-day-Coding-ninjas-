//Equal Sum 
#include <bits/stdc++.h> 
int equalSum(vector<int> token)
{
    // Write your code here   
    int right_side_sum=0, left_side_sum=0, i, j;
    
    for(i=1; i<token.size(); i++) {
        right_side_sum += token[i];   
    }

    for(i=0, j=1; j<token.size(); i++, j++) {
        left_side_sum += token[i];
        right_side_sum -= token[j];

        if(left_side_sum == right_side_sum) {
            return i+1;
        }
    }
    return -1;
}

