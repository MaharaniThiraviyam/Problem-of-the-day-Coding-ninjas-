//reverseElements
#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{   
   
    vector<int> temp;
    queue<int> res;
    for(int i=0; i<k; i++) {
        temp.push_back(q.front());
        q.pop();
    }

    for(int i=temp.size()-1; i>=0; i--) {
        res.push(temp[i]);
    }

    while(!q.empty()) {
        res.push(q.front());
        q.pop();
    }

    return res;
}
