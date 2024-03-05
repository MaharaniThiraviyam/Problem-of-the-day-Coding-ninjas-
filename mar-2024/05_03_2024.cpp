//checkPalindrome
#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.

    int n = s.size();
    for(int i=0, j=n-1; i<j; i++, j--) {
        while ((!isalpha(s[i])) && (!isdigit(s[i])) && (i < j)) i++;
        while ((!isalnum(s[j])) && (!isdigit(s[i])) && (i < j)) j--;

        if(s[i] >= 65 && s[i]<=90 ) {
            s[i] = 'a' + (s[i] - 'A');
        }

        if (s[j] >= 65 && s[j] <= 90) {
            s[j] = 'a' + (s[j] - 'A');
        }


        if((s[i]>='a' && s[i]<='z' || (isdigit(s[i]))) && (s[j]>='a' && s[j]<='z' || (isdigit(s[j])))){
            if (s[i] != s[j]) {
              return 0;
            }
        }
    }

    return 1;
}
