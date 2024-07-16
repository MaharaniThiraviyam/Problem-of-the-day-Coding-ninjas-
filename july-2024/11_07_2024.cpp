//Binary search
int search(vector<int> &A, int target) {
    // Write your code here.

    int left = 0;
    int right = A.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (A[mid] == target) {
            return mid;
        } else if (A[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}
