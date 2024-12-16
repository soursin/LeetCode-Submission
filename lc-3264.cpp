class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(make_pair(nums[i],i));
        }
        while(k--){
            pair<int,int> top = pq.top();
            pq.pop();
            pq.push(make_pair(top.first*multiplier,top.second));
        }
   
        while(!pq.empty()){
            pair<int,int> top = pq.top();
            pq.pop();
            nums[top.second]=top.first;
        }
        return nums;

    }
};