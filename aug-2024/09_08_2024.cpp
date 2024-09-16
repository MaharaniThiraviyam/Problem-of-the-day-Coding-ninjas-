//equilibriumPoint
 int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        int n = arr.size();
        
        if (n == 1) {
            return 1;  
        }
        
        int total_sum = 0;
        int left_sum = 0;
        
        for (int num : arr) {
            total_sum += num;
        }
        
         for (int i = 0; i < n; ++i) {
            total_sum -= arr[i];

            if (left_sum == total_sum) {
                return i + 1; 
            }

            left_sum += arr[i];
        }
        
        return -1; 
    }
