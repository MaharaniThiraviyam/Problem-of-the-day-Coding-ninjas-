vector<int> sumOfEvenOdd(int n){
    // Write your code here.
    int res[2]={0,0}, digit;
    while(n > 0) {
        digit = n%10;
        if(digit % 2 == 0) {
            res[0] += digit;
        }
        else {
            res[1] += digit;
        }
        n/=10;
    }
    return {res[0], res[1]};
}
