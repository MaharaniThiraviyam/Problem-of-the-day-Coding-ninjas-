 Admission in Ninja Gram 
#include <bits/stdc++.h> 
bool ninjaGram(string &str)
{
    // Write your code here
    int arr[26]={0}, i, temp;
    for(i=0; i<str.length(); i++) {
        if((str[i] >=65) && (str[i] <=90)) {
            arr[str[i] - 'A']++;
        }

        if((str[i] >=97) && (str[i] <=122)) {
            arr[str[i] - 'a']++;
        }
    }

    for(i=0; i<26; i++) {
        if(arr[i] == 0) {
            return false;
        }
    }

    return true;
}
