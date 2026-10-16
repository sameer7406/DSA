class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = n;

        while(true) {
            int temp = num;
            int ans = 1;

            while(temp > 0) {
                int rem = temp % 10;
                temp = temp / 10;
                ans = ans * rem;
            }

            if(ans % t == 0) {
                return num;
            }
            else {
                num++;
            }
        }

        return num;
    }
};