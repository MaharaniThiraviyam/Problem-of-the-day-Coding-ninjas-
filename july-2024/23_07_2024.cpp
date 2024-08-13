//getMinMax
 pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        pair<long long, long long> result;
        int min=arr[0], max=0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
            
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        
        result.first = min;
        result.second = max;
      
        return result;
    }
