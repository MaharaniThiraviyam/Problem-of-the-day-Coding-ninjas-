//Row with minimum number of 1's

int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        
        int count = 0;
        int min_ones = m + 1;  
        int min_row_index = 1;  
          
        for(int i=0; i<n; i++) {
           
            int count = 0;
            for(int j=0; j<m; j++) {
                if(a[i][j] == 1) {
                    count++;
                }
            }
            
            if(count < min_ones) {
                min_ones = count;
                min_row_index = i + 1;
            }
        }
        return min_row_index;
    }
