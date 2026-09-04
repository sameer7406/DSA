class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0;
        int n=nums.size();
        int end=n-1;
        int counts=1;
        int counte=n;
        while ( start<end){
            if (nums[start]+nums[end]==target){
                return {counts,counte};
            }
            else if (nums[start]+nums[end]>target){
                end--;
                counte--;
            }
            else  if (nums[start]+nums[end]<target){
                start++;
                counts++;
            }
        }
    return {counts,counte};
    }
};