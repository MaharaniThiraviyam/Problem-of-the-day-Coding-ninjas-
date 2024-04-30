//highestOccurringChar
char highestOccurringChar(char input[]) {
    // Write your code here

    int alpha_arr[26] = {0};

    for(int i=0; input[i] != '\0'; i++) {
        int index = input[i] - 'a';
        alpha_arr[index]++;
    }

    int max=0;
    char res='b';
    for(int i=0; i<26; i++) {
        if(alpha_arr[i] >max) {
            max = alpha_arr[i];
            res = 'a'+i;
        }
    }
    return res;
}
