//power of 2
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int x,n, result;
    std::cin>>x;
    std::cin>>n;

    if(n == 0) {
        result = 1;
    }
    else {
        result = x;
    }
   
    for(int i=2; i<=n; i++) {
        result *= x;
    }
    std::cout<<result;
    return 0;
}
