//convertString
#include <bits/stdc++.h> 
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	for(int i=0; str[i] != '\0'; i++) {
		if((str[i]>='a') && (i == 0 || str[i-1] == ' ')) {
			str[i] = 'A' + (str[i]-'a');		
		}
	}
	return str;
}
