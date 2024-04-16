//rowWaveForm
#include <bits/stdc++.h> 
vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    int row = mat.size();
    int  col = mat[0].size();
    
    vector<int> result;
    for(int i=0; i<row; i++) {
        if(i == 0 || i%2 == 0) {
            for(int j=0; j<col; j++) {
                result.push_back(mat[i][j]);
            }
        }
        else {
            for(int j=col-1; j>=0; j--) {
                result.push_back(mat[i][j]);
            }
        }
    }
    return result;
}
