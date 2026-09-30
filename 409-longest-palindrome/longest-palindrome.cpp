class Solution {
public:
    int longestPalindrome(string s) {
        vector<int >ss(128,0);
        for( int i=0;i<s.size();i++){
            ss[s[i]]++;
        }
        int ans=0;
        bool flag = false;
        for( int i=0;i<128;i++){
            if(ss[i]%2==0){
                ans+=ss[i];
            }
            else {
                ans+=ss[i]-1;
                flag = true;
            }
        }
        if(flag==true)
            ans++;
        return ans;
    }
};