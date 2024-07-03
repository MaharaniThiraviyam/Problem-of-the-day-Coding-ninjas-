//reverseOnlyLetters
#include <bits/stdc++.h> 
#include<string>
string reverseOnlyLetters(string & s) {
	int l=0, r=s.size();

	for(; l<r; ) {
		if(! isalpha(s[l])) {
			l++;
		}
		else if(! isalpha(s[r])) {
			r--;
		}
		else {
			char temp = s[l];
			s[l] = s[r];
			s[r] = temp;

			l++;
			r--;
		}
	}
	return s;
}
