class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
        vector<bool> taken(n,false);
        for(int i=0;i<n;i++){
            pq.push(make_pair(nums[i],i));
        }
        while(!pq.empty()){
            pair<int,int> p = pq.top();
            pq.pop();
            if(taken[p.second] == false){
                taken[p.second]=true;
                ans+=p.first;
                if(p.second-1>=0){
                    taken[p.second-1]=true;
                }
                
                if(p.second+1<nums.size()){
                    taken[p.second+1]=true;
                }
            
            }
        }
        return ans;
    }
};