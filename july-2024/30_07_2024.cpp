int isPalindrome(string S)
	{
	    // Your code goes here
	    int n = S.size();
	    for(int i=0, j=n-1; i<j; i++,j--) {
	        if(S[i] != S[j]) {
	            return 0;
	        }
	    }
	    
	    return 1;
	}
