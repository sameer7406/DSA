class Solution {
public:
    int subtractProductAndSum(int n) {
        int original=n;
        int product=1;
        int sum=0;
        while (original>0){
            int rem=original%10;
            original=original/10;
            product=product*rem;
            sum=sum+rem;
        }
        return product-sum;
        
    }
};