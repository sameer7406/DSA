class Solution {
public:
    int romanToInt(string s) {
        vector<int>ans;
        for( int i=0;i<s.size();i++){
            if(s[i]=='I'){
                ans.push_back(1);
            }
            if(s[i]=='V'){
                ans.push_back(5);
            }
            if(s[i]=='X'){
                ans.push_back(10);
            }
            if(s[i]=='L'){
                ans.push_back(50);
            }
            if(s[i]=='C'){
                ans.push_back(100);
            }
            if(s[i]=='D'){
                ans.push_back(500);
            }
            if(s[i]=='M'){
                ans.push_back(1000);
            }
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
           if(i + 1 < ans.size() && ans[i] < ans[i+1]) {
        sum -= ans[i];
    }
    else {
        sum += ans[i];
    }
        }
        return sum;
    }
};