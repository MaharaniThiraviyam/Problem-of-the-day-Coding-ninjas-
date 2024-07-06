//replaceSpaces
#include <bits/stdc++.h> 
#include<string>
string replaceSpaces(string &str){
	// Write your code here.
	string res;
	for(int i=0; str[i] != '\0'; i++) {
		if(str[i] == ' ') {
			res.push_back('@');
			res.push_back('4');
			res.push_back('0');
		}
		else {
			res.push_back(str[i]);
		}
	}
	return res;
}
