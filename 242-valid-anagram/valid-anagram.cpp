class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int >ss(26,0);
        vector<int >tt(26,0);
        for( int i=0;i<s.size();i++){
            
            ss[s[i]-'a']+=1;
        }
        for( int i=0;i<t.size();i++){
            
            tt[t[i]-'a']+=1;
        }
        for ( int i=0;i<26;i++){
            if(ss[i]!=tt[i]){
                return false;
            }
        }
        return true;


    }
};