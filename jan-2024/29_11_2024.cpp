//convertString
#include <bits/stdc++.h> 
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	for(int i=0; str[i] != '\0'; i++) {
		if((i == 0) || (str[i-1] == ' ')) {
			if(str[i] >= 'a' && str[i] <= 'z') {
				str[i] = (str[i] - 'a') + 'A';	
			}
		}
	}
	return str;
}
