//rotate
void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        int first = arr[n-1];
        for(int i=n-1; i>0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = first;
    }
