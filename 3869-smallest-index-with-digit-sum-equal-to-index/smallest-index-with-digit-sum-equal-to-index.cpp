class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for(int i=0; i<nums.size(); i++) {

            int n=nums[i];
            int ans=0;

            while(n>0) {
                int rem=n%10;
                n=n/10;
                ans+=rem;
            }

            if(ans==i) {
                return i;
            }
        }

        return -1;
    }
};