// Function to check if a number is a palindrome
bool isNumberPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    
    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    // Check if the original number is the same as the reversed number
    return original == reversed;
}
