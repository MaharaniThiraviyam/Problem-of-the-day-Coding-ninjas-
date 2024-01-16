//addFraction

#include <bits/stdc++.h> 
vector<long long int> addFraction(int a, int b, int c, int d)
{
	// Write your code here
	long long int numerator, denominator, temp_num, temp_deno;
	std::vector<long long int> res;

	numerator = temp_num = (a*d) + (c*b);
	denominator = temp_deno =  (b*d);

	while( temp_deno!= 0) {
		int temp = temp_deno;
		temp_deno =  temp_num % temp_deno;
		temp_num = temp;
	}
	
	long long int gcd = temp_num;
	numerator /= gcd;
	denominator /= gcd; 

	res.push_back(numerator);
	res.push_back(denominator);
	return res;
}

Add Two Fractions 
