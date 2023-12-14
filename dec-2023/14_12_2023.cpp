// Average Marks 
#include <bits/stdc++.h> 
#include <utility>
using namespace std;

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    // Write your code here.
    pair<char, int> RES;
    RES.first = firstLetterOfName;
    RES.second = int((m1+m2+m3)/3);
    return RES;
}
