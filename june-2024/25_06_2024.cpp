//reverseArray
void reverseArray(vector<int> &arr , int m) {
    // Write your code here   
    int n = arr.size();  
    for(int i=m+1, j=n-1;i<j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] =  temp;
    }  	
}
