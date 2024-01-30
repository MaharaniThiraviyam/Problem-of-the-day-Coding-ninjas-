//One Odd Occurring 
int missingNumber(int n, vector<int> &arr){
    // Write your code here.
    int num_arr[10] = {0};
    for(int i=0; i<n; i++) {
        num_arr[arr[i]] += 1;
    }

    for(int i=0; i<100000; i++) {
        if(num_arr[i]%2 != 0) {
            return i;
        }
    }
    return -1;
}
