 vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int n = arr.size();
        
          if (n < 2) {
            // If there are fewer than 2 elements, return {-1}
            return {-1};
        }   
    
        int first = arr[0], second = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] < first) {
                second = first;  // Update second smallest
                first = arr[i];   // Update smallest
            }
            else if (arr[i] < second && arr[i] != first) {
                second = arr[i];  // Update second smallest
            }
        }
        
        if (second == arr[0]) {
            second = -1;
        }
      
       return {first, second};

    }
