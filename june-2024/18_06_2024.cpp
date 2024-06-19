//Maximum no of 1's row
    int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            
            int max = 0;
            int result = 0;
            for(int i=0; i<N; i++) {
                int current_row_one = 0;
                for(int j=0; j<M; j++) {
                    if(Mat[i][j] == 1) {
                        current_row_one++;
                    }
                }
                
                if(current_row_one > max) {
                    result = i;
                    max = current_row_one;
                }
            }
            
            return result;
        }
