class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
         int n = nums.size();
        if (n <= 2) return n; 
         int min_idx = 0, max_idx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[min_idx]) min_idx = i;
            if (nums[i] > nums[max_idx]) max_idx = i;
        }
        int left_idx = min(min_idx, max_idx);
        int right_idx = max(min_idx, max_idx);
       int op1 = right_idx + 1;
        int op2 = n - left_idx;
        int op3 = (left_idx + 1) + (n - right_idx);
        return min({op1, op2, op3});
    }
};