//findPeakElement
int findPeakElement(vector<int> &arr) {
    // Write your code here
    for(int i=1; i<=arr.size(); i++) {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
            return i;
        }
    }
   
}
