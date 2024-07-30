//divideString
#include <bits/stdc++.h> 
vector<string> divideString(string &word, int n) {
  // Write your code here
  vector<string> res;
  if((word.length()%n) != 0) {
    return res;
  }


  for(int i=0; i<word.length(); i++) {
    res.push_back(sting(1, word[i]));
    if(((i+1)%n) == 0 && (i != word.length()-1)) {
      res.push_back(" ");
    }
  }

  return res;
}
