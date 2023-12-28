#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int ones=0, zeros=0, twos=0, i, temp=0;
   for(i=0; i<n; i++) {
      if(arr[i] == 0) {
         zeros+=1;
      }
      else if(arr[i] == 1) {
         ones+=1;
      }
      else if(arr[i] == 2) {
         twos+=1;
      }
   }
   
   for(i=0; i<n; i++) {
      if(zeros > 0) {
         arr[i] = 0;
         zeros -= 1;
      }
      else if(ones > 0) {
         arr[i] = 1;
         ones -= 1;
      }
      else if(twos > 0) {
         arr[i] = 2;
         twos -= 1;  
      }
      
   } 
}
