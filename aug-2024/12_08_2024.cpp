// Function to check if all elements in the array are palindrome numbers
bool allPalindrome(const vector<int>& arr) {
    for (int num : arr) {
        if (!isPalindrome(num)) {
            return false;
        }
    }
    return true;
}
