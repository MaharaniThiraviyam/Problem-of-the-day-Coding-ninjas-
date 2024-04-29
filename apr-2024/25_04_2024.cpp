//editSentence
string editSentence(string &str)
{
	// Write your code here.
	string res;
	for(int i=0; str[i]!='\0'; i++) {
		if(i == 0 && (str[i] >= 'A' && str[i]<='Z')) {
			res.push_back(str[0]-'A'+'a');
		}
		else if(str[i] >= 'A' && str[i]<='Z' ) {
			res.push_back(' ');
			char ch = (str[i] - 'A') + 'a';
			res.push_back(ch);
	
		}
		else {
			res.push_back(str[i]);
		}
	}
	return res;
}
