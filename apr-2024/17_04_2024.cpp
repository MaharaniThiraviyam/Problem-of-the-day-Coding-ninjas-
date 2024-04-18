//twoRepeated
vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        vector<int> result;
    
    
        for (int i = 0; i < n + 2; i++) {
            int index = abs(arr[i]) - 1;
          
            if (arr[index] > 0) {
                arr[index] = -arr[index];
            } else {
                result.push_back(index+1);
            }
        }
    
        for (int i = 0; i < n + 2; ++i) {
            if (arr[i] > 0) {
                result.push_back(i+1);
                break;
            }
        }
        return result;
    }
