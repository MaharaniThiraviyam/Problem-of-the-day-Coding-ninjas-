//isPowerOfTwo
bool isPowerOfTwo(int n)
{	
    // Write your code here.
    int i=2;
    while (i < n) {
      i *= 2;
    }

    if (i == n) {
        return true;
    }
    else {
        return false;
    }
}
