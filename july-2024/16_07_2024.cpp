//compressTheString
#include <bits/stdc++.h> 
string compressTheString(string &s)
{
	// Write your code here
	int n = s.length();
	std::string compressed = "";

	for (int i=0; i<n; i++) {
		int count = 1;
                while (i < n - 1 && s[i] == s[i + 1]) {
                  count++;
                  i++;
                }
				compressed += s[i];

                                if (count > 1) {
                  compressed += std::to_string(count);
                                }
        }
		return compressed;
}
