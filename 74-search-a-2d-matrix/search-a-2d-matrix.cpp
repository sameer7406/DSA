class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
        int start=0;
        int end=n*m-1;
        while(start<=end){
            int mid=(start+end)/2;
            int r=mid/n;
            int c=mid%n;
            if(mat[r][c]==target){
                return true;
            }
            else if(mat[r][c]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};