 vector<int> countOddEven(vector<int> &arr) {
        // your code here
        int odd = 0, even = 0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        
        vector<int> res;
        res.push_back(even);
        res.push_back(odd);
    }
