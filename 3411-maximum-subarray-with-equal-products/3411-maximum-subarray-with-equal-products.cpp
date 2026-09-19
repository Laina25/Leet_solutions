class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;
      int maxElement = *max_element(nums.begin(), nums.end());   
        for (int i = 0; i < n; ++i) {
            long long runningProduct = 1;
            long long runningGcd = 0;
            long long runningLcm = 1;   
            for (int j = i; j < n; ++j) {
                 if (runningProduct > (long long)maxElement * runningLcm / nums[j]) {
                    break; 
                }
                runningProduct *= nums[j];
                runningGcd = std::gcd(runningGcd, (long long)nums[j]);
                runningLcm = std::lcm(runningLcm, (long long)nums[j]);
            if (runningProduct == runningGcd * runningLcm) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        
        return maxLen;
    }
};