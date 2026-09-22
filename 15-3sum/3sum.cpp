class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> vec;
        for ( int i=0;i<arr.size()-2;i++){
            // int ans=target-arr[i];
             if(i>0 && arr[i]==arr[i-1])
                continue;
            int ans=0;
            int start=i+1,end=n-1;
            while(start<end){
                if(arr[i]+arr[start]+arr[end]==ans){
                    vec.push_back({arr[i],arr[start],arr[end]});
                    while(start<end && arr[start]==arr[start+1])
                        start++;
                    while(start<end && arr[end]==arr[end-1])
                        end--;

                    start++;
                    end--;
                }
                else if(arr[i]+arr[start]+arr[end]>ans){
                    end--;
                }
                else {
                    start++;
                }
            }
        }
        return vec; 
    }
};