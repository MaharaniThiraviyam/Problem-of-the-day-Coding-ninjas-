//sumOfDigits
 int sumOfDigits(int N){
        //code here
        int result = 0;
        for(; N>0; N/=10) {
            result += N%10;
        }
        return result;
    }
