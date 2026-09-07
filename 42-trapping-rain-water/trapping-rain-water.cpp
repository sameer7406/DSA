class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxleft;
        vector<int> maxright;
        int n=height.size();
        int maxl=INT_MIN;
        // maxleft[0]=maxleft.push_back(0); ;
        for ( int i=0;i<n;i++){
            maxl=max(maxl,height[i]);
            maxleft.push_back(maxl);
        }
        int maxr=INT_MIN;
        // maxright[n-1]=maxright.push_back(0); ;
        for ( int i=n-1;i>=0;i--){
            maxr=max(maxr,height[i]);
            maxright.push_back(maxr);
        }
        reverse(maxright.begin(), maxright.end());

        vector<int> ans;
        int minn=INT_MAX;
        for ( int i=0;i<n;i++){
            minn=min(maxleft[i],maxright[i]);
            if (minn>=height[i]){
                ans.push_back(minn-height[i]);
            }
            else {
                ans.push_back(0);
            }
        }


        int sum=0;
        for ( int i=0;i<n;i++){
            sum+=ans[i];
        }
        return sum;



        
    }
};