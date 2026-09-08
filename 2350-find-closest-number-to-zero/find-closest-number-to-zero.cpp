class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini = nums[0];
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (abs(nums[i]) < abs(mini)) {
                mini = nums[i];
            }
            else if (abs(nums[i]) == abs(mini)) {
                mini = max(mini, nums[i]);
            }
        }

        return mini;
    }
};