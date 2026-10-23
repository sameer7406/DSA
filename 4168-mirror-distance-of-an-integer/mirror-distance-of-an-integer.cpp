class Solution {
public:
    int mirrorDistance(int n) {
        int num=n;
        int ans = 0;

        while(n > 0) {
            int rem = n % 10;
            ans = ans * 10 + rem;
            n /= 10;
        }

        return abs(num-ans);
            }
};