//Sum of even & odd 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    string str;
    int i, odd_sum = 0,even_sum = 0, digit=0;
    std::cin>>str;

    for(i=0; str[i]!='\0'; i++) {
        digit = str[i] - 48;
        if((digit % 2) == 0) {
            even_sum += (digit);
        }
        else {
            odd_sum += (digit);
        }
    }
    std::cout<<even_sum<<" "<<odd_sum;
    return 0;
}
