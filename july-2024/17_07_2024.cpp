//reverseArray
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    for(int i=0,j=n-1; i<j; i++, j--) {
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
    }
    return nums;
}
