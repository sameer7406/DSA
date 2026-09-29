class Solution {
public:
    
    bool rotateString(string s, string goal) {
        int n=s.size()-1;
            if(s.size() != goal.size())
            return false;

            if(s == goal)
                return true;

            while(n--){
            char c=s[s.size()-1];
            int index=s.size()-1;
            while(index--){
                s[index+1]=s[index];
            }
            s[0]=c;
            if(s==goal){
                return true;
            }
        

        }
        
        return false;
        
        
    }
};