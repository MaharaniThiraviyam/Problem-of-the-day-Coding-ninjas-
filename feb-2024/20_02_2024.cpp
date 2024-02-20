//coverageOfMatrix
#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int result = 0;
    int rows  = mat.size();
    int cols = mat[0].size();
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {

            if(mat[i][j] == 0) {
                if(((i+1) < mat.size()) && (mat[i+1][j] == 1)) {   
                    result += 1;
                }
                if(((i-1) >= 0) && (mat[i-1][j] == 1)) {
                    result += 1;
                }
                if(((j+1)<mat[0].size()) && (mat[i][j+1] == 1)) {
                    result += 1;
                }
                if(((j-1)>=0) && mat[i][j-1] ==1) {
                    result += 1;
                }
            }
        }
    }
    return result;
}   
