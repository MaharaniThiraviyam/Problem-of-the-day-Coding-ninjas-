//Find Character Case 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    char ch;
    std::cin>>ch;
    if(ch>=65 && ch<=91) {
        std::cout<<"1";
    }
    else if(ch>=97 && ch<=123) {
        std::cout<<"0";
    }
    else {
        std::cout<<"-1";
    }
    return 0;
}
