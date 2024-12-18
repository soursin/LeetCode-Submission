class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        vector<int> res;
        s.push(prices[0]);
        for(int i=0;i<prices.size();i++){
            int top = s.top();
            s.pop();
            int j=i+1;
            while(j<=prices.size()-1 && prices[j]>top){
                // cout<<i<<" "<<"Skip" << j<<" ";
                j++;
            }
            if(j<=prices.size()-1 && top>= prices[j]){
                res.push_back(top-prices[j]);
            }else{
                res.push_back(top);
            }

            if(i+1<prices.size()){
                s.push(prices[i+1]); 
            }
        }
        return res;
    }
};