//Set Matrix Zeros
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size(), m = matrix[0].size();
	vector<int> row(n,0), col(m,0);

	int i,j;
	for(i=0; i<matrix.size(); i++) {
		for(j=0; j<matrix[0].size(); j++) {
			if(matrix[i][j] == 0) {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}


	for(i=0; i<matrix.size(); i++) {
		for(j=0; j<matrix[0].size(); j++) {
			if(row[i] || col[j]) {
				matrix[i][j] = 0;
			}
		}
	}


	
}
