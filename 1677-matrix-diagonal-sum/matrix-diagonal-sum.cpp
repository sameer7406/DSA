class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int first=0;
        int second=0;
        for( int i=0;i<m;i++){
            for( int j=0;j<n;j++){
                if(i==j){
                    first+=mat[i][j];
                }
                 if((i+j)==n-1){
                    second+=mat[i][j];
                }
            }
        }
        int sum=first+second;
        if(n % 2 == 1) {
            sum -= mat[n/2][n/2];
        }
        
        return sum;

    }
};