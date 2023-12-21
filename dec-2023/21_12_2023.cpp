//replaceSpaces
#include <bits/stdc++.h> 
using namespace std;
string replaceSpaces(string &str){
	// Write your code here.
	string tmp;
	for(int i=0; str[i] != '\0'; i++) {
		if(str[i] == ' ') {
			tmp.push_back('@');
			tmp.push_back('4');
			tmp.push_back('0');
		}
		else {
			tmp.push_back(str[i]);
		}
	}
	return tmp;
}
