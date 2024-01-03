//Admission in Ninja Gram 
#include <bits/stdc++.h> 
bool ninjaGram(string &str)
{
    // Write your code here
    int alpha_num[26] = {0}, i;

    for(i=0; str[i] != '\0'; i++) {
        if((str[i] >= 65) && (str[i] <= 91)) {
            alpha_num[str[i]-65] += 1;
        }
        else if ((str[i] >= 97) && (str[i] <= 123)) {
            alpha_num[str[i]-97] += 1;
        }
    }

    for(i=0; i<26; i++) {
        if(alpha_num[i] < 1) {
            return false;
        }
    }

    return true;
}
