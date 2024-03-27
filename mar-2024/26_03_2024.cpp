//isValid
bool isValid(string &str)
{
	// Write your code here.
	if(str.size()<8 || str.size()>15) {
		return false;
	}

	bool has_digit = false, has_lower_case=false, has_upper_case=false;
	for(int i=0; i<str.size(); i++) {
		if(str[i] == ' ') {
			return false;
		}
		else if(str[i] >= 48 && str[i]<=57) {
			has_digit = true;
		}
		else if(str[i]>='a' && str[i]<='z')  {
			has_lower_case = true;
		}
		else if(str[i]  >= 'A' && str[i]<='Z') {
			has_upper_case = true;
		}
	}
	return has_digit&&has_lower_case&&has_upper_case;
}
