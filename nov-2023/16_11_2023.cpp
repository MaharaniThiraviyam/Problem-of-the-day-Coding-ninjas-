//Sum of even & odd
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n, even=0, odd=0;
	std::cin>>n;
	for(;n>0;n/=10) {
		if(((n%10)%2) == 0) {
			even += (n%10);
		}
		else {
			odd += (n%10);
		}
	}
	std::cout<<even<<" "<<odd;
}
