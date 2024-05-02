//splitString
#include <bits/stdc++.h> 
bool splitString(string &str){
    // Write your code here.
    int first_half_vowel = 0, second_half_vowel = 0, count = 0, i;
    for(i=0; str[i] != '\0'; i++) {
        count++;
    }

    for(i=0; i<= count; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'  || str[i] == 'u'
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ) {
            if(i< (count/2)) {
                first_half_vowel += 1;
            }
            else {
                second_half_vowel += 1;
            }
        }
    }
    
    if(first_half_vowel == second_half_vowel) {
        return 1;
    }
    else {
        return 0;
    }
}
