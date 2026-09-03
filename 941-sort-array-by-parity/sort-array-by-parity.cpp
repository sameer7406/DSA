class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start=0;
        int n=nums.size();
        int end=n-1;
        while (start<end){
            if (nums[start]%2==0){
                start++;
            }
            else {
                if (nums[end]%2==0){
                    swap(nums[start],nums[end]);
                    start++;
                    end--;
                }
                else {
                    end--;
                }
            }
        }
        return nums;
    }
};