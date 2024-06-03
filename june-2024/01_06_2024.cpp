//Nearest Multiple of 10 
int nearestMulitple(int n) 
{
    // Write your code here.

    int right_most_digit = n%10;
    if(right_most_digit == 0) {
        return n;
    }

    if(right_most_digit<=5) {
        n -= right_most_digit;
    }
    else {
        int temp = 10 - right_most_digit;
        n += temp;
    }

    return n;
}
