//Find Character Case
#include <bits/stdc++.h> 
int findCase(char ch) {
    // Write your code here.

    if(ch >= 65 && ch <= 91) {
        return 1;
    }
    else if(ch >=97 && ch <= 123) {
        return 0;
    }
    else {
        return -1;
    }
}
