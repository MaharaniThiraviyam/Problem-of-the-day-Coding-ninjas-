//primeNumbersTillN
#include <cmath>
vector<int> primeNumbersTillN(int N) 
{ 
 	// Write your code here

	vector<int> res;
	for(int i=2; i<=N; i++) {
		int is_prime = 1;
		for(int j=2; j<=sqrt(i); j++) {
			if(i%j == 0) {
				is_prime = 0;
				break;
			}
		}

		if(is_prime == 1) {
			res.push_back(i);
		}
	}
	return res;
}
