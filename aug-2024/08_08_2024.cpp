//findFloor
int findFloor(vector<long long> &arr, long long n, long long x) {

        // Your code here
        int low = 0, high = n - 1;
        int res = -1; 
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] <= x) {
                res = mid; 
                low = mid + 1;
            } 
            else {
                high = mid - 1; 
            }
        }
        return res;
    }
