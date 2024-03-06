//replaceSpaces
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string result = "";
	for(int i=0; i<str.size(); i++) {
		if(str[i] == ' ') {
			result += "@40";
	    }
		else {
			result += str[i];
		}
	}
	return result;
}
