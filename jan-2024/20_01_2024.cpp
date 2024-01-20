//findShortestPalindrome
#include <bits/stdc++.h> 
#include<string> 

string findShortestPalindrome(string &str)
{
    // Write your code here.
    int string_length = str.length();
    string res;
    
    int i,j;
    for(i=0, j=string_length-1; j>=0; j--) {
       res += str[j];
       if((str[i] == str[j])) {
           i++;
       }
    }

    if(i<string_length) {
       for(j=i; j<string_length; j++) {
           res += str[j];
       } 
    }
    return res;
}
