//armstrongNumber
string armstrongNumber(int n) {
        // code here
        
        long long result = 0;
        int temp = n;
        for(; n>0; n/=10) {
            int rem = n%10;
            
            result += (rem * rem * rem);
        }
        
        if(temp == result) {
            return "true";
        }
        else {
            return "false";
        }
    }
