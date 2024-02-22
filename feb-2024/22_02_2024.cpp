//matrixGame
#include <bits/stdc++.h> 
bool matrixGame(vector<vector<int>> &mat)
{
    // Write your code here
    int n = mat.size();
    vector<vector<int>> result(n, vector<int>(n,0));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                result[i][j] += (mat[i][k] * mat[k][j]);
            }
        }
    }


    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(mat[i][j] != result[i][j]) {
                return false;
            }
        }
    }

    return true;
}
