//char count
#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
	char ch;
	int alpha_count = 0, num_count = 0, space_count = 0;

	while(cin.get(ch)) {
		if(ch >= 'a' && ch <= 'z') {
			alpha_count++;
		}
		else if (ch == ' ' || ch == '\n' || ch == '\t' ) {
			space_count++;
		}
		else if(ch >= 48 && ch <=57) {
			num_count++;
		}
	}

	cout<<alpha_count<<" "<<num_count<<" "<<space_count;
}
