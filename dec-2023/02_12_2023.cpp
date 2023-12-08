//Four Divisors 
#include <bits/stdc++.h> 
int sumFourDivisors(vector<int> &arr, int n)
{
    // Write your code here.
    int i, div_arr[] = {0,0,0,0},j,k,res=0, div_counter;
    for(i=0; i<n; i++) {
        
        div_arr[2] = 0;
div_arr[3] = 0;
        div_arr[0] = 1;
        div_arr[1] = arr[i];
        div_counter = 2;
        k = 2;
        for(j=2; j<= (arr[i]/2)+1; j++) {
            if(arr[i] % j == 0) {
                if(k<4) {
                    div_arr[k] = j;
                    k++;
                }
                div_counter++;
            }
        }
       
       
        if(div_counter == 4) {
            res += div_arr[0] + div_arr[1] + div_arr[2] + div_arr[3];
        }
    }
    return res;
}
