//isKthBitSet
bool isKthBitSet(int n, int k)
{
    // Write your code here.
    int count = 1;
    for(; n>0; n/=2) {
        int rem = n%2;
        if(count == k && rem == 1) {
            return true;
        }
        count++;
    }

    return false;
}
