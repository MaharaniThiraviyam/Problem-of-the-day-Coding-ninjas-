// Inverted Triangle Of Stars 
#include <bits/stdc++.h> 
vector<string> Triangle(int n)
{
   // Write your code here
   vector<string> result;
   for(int i=0; i<n; i++) {
      string line;
      line.append(i, ' ');
      line.append((2*n-1)-(2*i), '*');
      result.push_back(line);

   }

   return result;
}
