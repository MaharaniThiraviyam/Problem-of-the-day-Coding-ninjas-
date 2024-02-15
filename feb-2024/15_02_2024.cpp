//countNumberOfPalindromeWords
#include <bits/stdc++.h> 
#include <string.h>
int countNumberOfPalindromeWords(string s)
{
	//Your code goes here
	string temp_word="";
	int total_palidromes = 0;
	if(s == " ") {
		return total_palidromes;
	}
	
	for(int i=0; s[i] != '\0'; i++) {
		if(s[i] == ' ' || s[i+1] == '\0') {	
			int is_palindrome = 1;
			if(temp_word.length() == 1) {
				is_palindrome = 1;
			}
			else {		
				for(int j=0, k=temp_word.length()-1; j<k; j++, k--) {
					if(temp_word[j] != temp_word[k]) {
						is_palindrome = 0;
					}
				}
			}
			temp_word = "";

			if(is_palindrome == 1) {
				total_palidromes++;
			}
		}
		else {
			if(s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = (s[i]-'A')+'a';
			}
			temp_word += s[i];
		}	
	}

	return total_palidromes;
}
