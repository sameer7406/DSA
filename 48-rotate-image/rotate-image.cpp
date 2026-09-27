class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        for( int i=0;i<n;i++){
            for( int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for( int i=0;i<n;i++){
            int start=0;
            int end=mat[0].size()-1;
            while(start<=end){
                swap(mat[i][start],mat[i][end]);
                start++;
                end--;
            }
        }
        
        

    }
};