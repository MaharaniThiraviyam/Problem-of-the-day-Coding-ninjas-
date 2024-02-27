//Patternify

#include <bits/stdc++.h> 
#include<string>
vector<string> printPatt(int n)
{
    // Write your code here
    vector<string>result;
    for(int i=0; i<n; i++) {
        string temp_str = "";
        for(int j=i; j<n; j++) {
          temp_str += "*";  
        }
        result.push_back(temp_str);
    }
    return result;
}

