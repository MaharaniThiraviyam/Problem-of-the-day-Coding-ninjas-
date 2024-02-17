// Factorial of a Number 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int res=1, n;
    std::cin>>n;
    if(n < 0) {
        std::cout<<"Error";
    }
    else {
        if(n == 1) {
            res = 1;
        }

        for(int i=2; i<=n; i++) {
            res *= i;
        }
        std::cout<<res; 
    }
    return 0;
}
