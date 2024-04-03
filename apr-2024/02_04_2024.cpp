//maximumWeightRow
#include <bits/stdc++.h> 
int maximumWeightRow(int n, int m, vector<vector<int>> &mat) {
    // Write your code here.
    int res = 0, row_sum;
    for(int i=0; i<n; i++) {
        row_sum = 0;
        for(int j=0; j<m; j++) {
            row_sum += mat[i][j];
        }

        if(row_sum > res) {
            res = row_sum;
        }
    }
    return res;
}
