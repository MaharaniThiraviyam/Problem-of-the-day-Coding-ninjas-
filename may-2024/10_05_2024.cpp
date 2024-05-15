//Square Root of a number 

int floorSqrt(int n)
{
    // Write your code here.
    int i;
    for(i=1; (i*i)<n; i++);
    if((i*i) <=n) {
        return i;
    }
    return i-1;
}
