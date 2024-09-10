    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        if (d == 0 || d == n) {
            return;
        }
        
        d = d % n;
        
        
        reverse(arr, 0, d - 1);
        
        reverse(arr, d, n - 1);
        
        reverse(arr, 0, n - 1);
    }
