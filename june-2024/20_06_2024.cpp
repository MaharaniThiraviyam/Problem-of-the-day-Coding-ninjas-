//Frog Jump
#include <climits>
int frogJump(int N, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(N, INT_MAX);
    dp[0] = 0;
    for (int i = 0; i < N; i++) {
    if (i + 1 < N) {
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(heights[i + 1] - heights[i]));
    }

    if (i + 2 < N) {
        dp[i + 2] = min(dp[i + 2], dp[i] + abs(heights[i + 2] - heights[i]));
    }
    }
    return dp[N-1];
}   
