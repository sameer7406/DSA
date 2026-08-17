class Solution {
public:

    bool isValid(vector<int>& nums, int k,int mid){
        int stu=1;
        int pages=0;
        int n=nums.size();
        for (int i=0;i<n;i++){
            if (nums[i]>mid){
                return false;
            }
            if (pages+nums[i]<=mid){
                pages=pages+nums[i];
            }
            else {
                stu++;
                pages=nums[i];
            }
        }
        return stu>k?false:true;

    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for (int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        int start=0;
        int end=sum;
        int ans=-1;
        while (start<=end){
            int mid=start+(end-start)/2;
            if (isValid(nums,k,mid)){
                ans=mid;
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        return ans;
        
    }
};