class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0,end=n-1;
        // int ans;rgrg
        while (start<=end){
            // int mid=start+(end-start)/2;
            int mid=end+(start-end)/2;
            if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                // ans=mid;
                return mid;
            }
            else if (arr[mid]>arr[mid-1]){
                start=mid+1;
            }
            else {end=mid-1;}
        }
        return -1;
    }
};