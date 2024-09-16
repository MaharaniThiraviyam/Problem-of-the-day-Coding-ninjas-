//peakElement
 int peakElement(int arr[], int n)
    {
       // Your code here
       int low = 0;
       int high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < arr[mid + 1]) {
               low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        return low;
    }
