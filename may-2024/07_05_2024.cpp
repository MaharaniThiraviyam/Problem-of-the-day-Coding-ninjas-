//reverseString
#include <bits/stdc++.h> 
string reverseString(string str)
{
	// Write your code here.
    int n = str.size();
	for(int i=0, j=n-1; i<j; i++, j--) {
		char ch;
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}

	return str;
}
