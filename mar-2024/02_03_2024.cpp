//missingNumber
int missingNumber(vector<int>& array, int n) {
    // Your code goes here
    int total_sum = (n*(n+1))/2;
    int arr_sum = 0;
    for(int i=0; i<n-1; i++) {
        arr_sum += array[i];
    }
    return (total_sum - arr_sum);
}
