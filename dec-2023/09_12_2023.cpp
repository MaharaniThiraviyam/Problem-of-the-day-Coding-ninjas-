//bit set
#include <bits/stdc++.h> 
int findFirstRepeatingDigit(string digitPattern) {
    // Write your code here.
    int num_count_arr[10] ={0};
    int num_position_arr[10] = {0};
    int index, i, min=10;

    for(i=0; digitPattern[i] != '\0'; i++) {
        index = digitPattern[i] - 48;
        num_count_arr[index] += 1;
        if(num_count_arr[index] > 1) {
          num_position_arr[index] = i;  
        }
    }

    index = 0;
    for(i=0; i<10; i++) {
        if(num_position_arr[i] > 0 && num_position_arr[i] < min) {
            min = num_position_arr[i];
            index = i;
        }
    }

    if(index > 0) {
        return index;
    }
    else {
        return -1;
    }
}
