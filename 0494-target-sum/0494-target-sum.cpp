class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
   int sum = 0;
        for (int n : nums) sum += n;
     if (abs(target) > sum || (sum + target) % 2 != 0) return 0;
        int s = (sum + target) / 2; 
        vector<int> dp(s + 1, 0);
        dp[0] = 1;

        for (int n : nums) {
            for (int j = s; j >= n; j--) {
                dp[j] += dp[j - n];
            }
        }

        return dp[s];
    }
};