class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int res=values[0],res2=INT_MIN;
        for(int i=1;i<values.size();i++){
            res2 = max(res2,res+values[i]-i);
            res = max(res,values[i]+i);
        }
        
        return res2;
    }
};