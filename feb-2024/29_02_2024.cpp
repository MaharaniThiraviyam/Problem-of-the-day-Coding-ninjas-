//isPrime

bool isPrime(int n)
{
	// Write your code here.
	if(n == 1) {
		return 0;
	}
	else if ((n == 2) || (n == 3)) {
		return 1;
	} 
	else {
		for(int i=2; i<=((n/2)+1); i++) {
			if(n%i == 0) {
				return 0;
			}
		}
		return 1;
	}
}
