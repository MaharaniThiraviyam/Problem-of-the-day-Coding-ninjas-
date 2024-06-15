//findFirstRepeatingDigit
#include <bits/stdc++.h> 
int findFirstRepeatingDigit(string digitPattern) {
    // Write your code here.
    int digit_arr[10] = {0};
    for(int i=0; digitPattern[i] != '\0'; i++) {
        int index = digitPattern[i]-'0';
        digit_arr[index]++;
        if(digit_arr[index] > 1) {
            return index;
        }
    }
    return -1;
}
