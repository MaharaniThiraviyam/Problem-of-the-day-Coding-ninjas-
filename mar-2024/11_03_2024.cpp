//reverseWord
string reverseWord(string str)
    {
        // Your code goes here
        int n=str.size();
        for(int i=0, j=n-1; i<j; i++, j--) {
            int temp = str[i];
            str[i]=str[j];
            str[j] = temp;
        }
        return str;
    }
