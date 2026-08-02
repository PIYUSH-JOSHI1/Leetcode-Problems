class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        // dp[i][j] stores the maximum net score difference (Alice - Bob) 
        // for the subarray piles[i...j]
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Base case: Subarrays of size 1
        for (int i = 0; i < n; ++i) {
            dp[i][i] = piles[i];
        }

        // Fill DP table for larger subarray lengths
        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                dp[i][j] = max(piles[i] - dp[i + 1][j], piles[j] - dp[i][j - 1]);
            }
        }

        return dp[0][n - 1] > 0;
    }
};