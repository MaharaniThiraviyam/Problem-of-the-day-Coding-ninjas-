//Self Dividing Numbers
#include <bits/stdc++.h> 
#include <vector>
vector < int > findAllSelfDividingNumbers(int lower, int upper) {
    // Write your code here
    vector<int> res;
    int current_number, valid, digit, i, temp;
    for(i=lower; i<=upper; i++) {
        current_number = i;
        valid = 1;
        while(current_number > 0) {
          if (current_number%10 == 0 || i%(current_number%10)!=0) {
              valid = 0;
              break;
          }
            current_number/=10;
        }  

        if(valid == 1) {
            res.push_back(i);
        } 
    }
    return res;
}
