//sumOfMatrix
 int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        int sum = 0;
        // code here
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                sum += Grid[i][j];
            }
        }
        return sum;
    }
