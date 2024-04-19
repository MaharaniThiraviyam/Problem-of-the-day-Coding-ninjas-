//checkPalindrome
#include <bits/stdc++.h> 
using namespace std;
bool checkPalindrome(string s)
{
    // Write your code here.
    for(int i=0, j=s.size(); i<j; i++, j--) {
        if(s[i] >= 'A' && s[i]<='Z') {
            s[i] = (s[i] - 'A') + 'a';
        }

        if(s[j] >= 'A' && s[j] <='Z') {
            s[j] = (s[j]-'A') + 'a';
        }

        if(s[i] != s[j]) {
            return 0;
        }
    }
    
    return 1;
}
