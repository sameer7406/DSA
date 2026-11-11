class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,minprice=INT_MAX,profit;
        for (int i=0;i<prices.size();i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            else {
                profit=prices[i]-minprice;
                maxprofit=max(maxprofit,profit);
            }
            
        }
        return maxprofit;
        
        
    }
};