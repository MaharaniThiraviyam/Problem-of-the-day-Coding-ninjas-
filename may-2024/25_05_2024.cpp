//nextGreaterElement

#include <vector>
#include<stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	// Write your code here
	stack<int> temp;
	vector<int> res;

	for(int i=n-1; i>=0; i--) {
		while(!temp.empty() && temp.top()<= arr[i]){
			temp.pop();
		}

		if(!temp.empty()) {
			res[i] = temp.top();
		}

		temp.push(arr[i]);
	}
	return res;
}
