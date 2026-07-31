class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool buy = true;
        int i=1;
        int buyValue,sellValue;
        int profit =0;
        while(i<prices.size()){
            if(buy == true){
                buyValue= min(prices[i],prices[i-1]);
                buy = false;
                i++;
            }else{
                sellValue= max(prices[i],prices[i-1]);
                buy=true;
                i++;
                profit += sellValue-buyValue;
            }
            if(buy==false && i==prices.size() && buyValue < prices[i-1]){
               profit += prices[i-1]-buyValue; 
            }
            
        }
        if(profit>0){
            return profit;
        }else{
            return 0;
        }
    }
};