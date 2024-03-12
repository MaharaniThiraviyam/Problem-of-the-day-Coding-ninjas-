//removeDuplicates
string removeDuplicates(string str) {
	    // code here
	    int alpha_arr[26] = {0};
	    int cap_arr[26] = {0};
	   
	    for(int i=0; i<str.size(); i++) {
	     
	        if(str[i] >= 'a' && str[i]<='z') {
	            if(alpha_arr[str[i]-'a'] == 0) {
	                alpha_arr[str[i]-'a'] += 1;
	            }
	            else {
	                str.erase(str.begin() + i);
	                i--;
	            }
	        }
	        else if(str[i] >= 'A' && str[i]<='Z') {
    	        if(cap_arr[str[i]-'A'] == 0) {
    	            cap_arr[str[i]-'A'] += 1;
    	        }
    	        else {
    	          str.erase(str.begin() + i);
    	          i--;
    	        }
	        }
	    }
	    return str;
	}
