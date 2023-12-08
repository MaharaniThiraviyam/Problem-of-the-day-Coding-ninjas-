//Mailing Problem 
int timeTakenToMail(string keyboard, string s) {
    //    Write your code here
    int alpha_arr[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i, index, total=0, prev=0;
    for(i=0; keyboard[i] != '\0'; i++) {
        index = keyboard[i] - 97;
        alpha_arr[index] = i;
    }

    for(i=0; s[i]!='\0'; i++) {
        index = s[i] - 97;
        if(alpha_arr[index] - prev < 0) {
            total += ((-1) * (alpha_arr[index] - prev));
        }
        else {
            total += alpha_arr[index] - prev;
        }
       
        prev = alpha_arr[index];
    }
    return total;
}
