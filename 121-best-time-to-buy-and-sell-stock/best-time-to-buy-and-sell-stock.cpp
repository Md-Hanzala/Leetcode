class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minPrice=prices[0], profit=0, n=prices.size();
    for(int i=1;i<n;i++){
        if(prices[i]<minPrice){
            minPrice=prices[i];
        }
        int tprofit=prices[i]-minPrice;
        if(tprofit>profit){
            profit=tprofit;
        }
    }
    return profit;    
    }
};