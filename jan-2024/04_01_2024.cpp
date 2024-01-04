//Rock Paper Scissor 
#include <bits/stdc++.h> 
vector < int > rockPaperScissor(int k, string nezuko, string zenitsu) {
    // Write your code here.
    vector<int> res(2);
    res[0]=0; res[1]=0;
    int i;
    for(i=0; i<k; i++) {
        if ((nezuko[i] != '\0') && (zenitsu[i] !='\0') && (nezuko[i] != zenitsu[i])) {
            if((nezuko[i] =='P' && zenitsu[i] == 'R')  || (nezuko[i] =='R' && zenitsu[i] == 'S') || (nezuko[i] =='S' && zenitsu[i] == 'P') ) {
                res[0]+=1;
            }
            else {
                res[1]+=1;
            }
        }
    }
    return res;
}
