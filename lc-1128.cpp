class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            int cnt = 0;
            map<vector<int>,int> mp;
            int n = dominoes.size();
            for(auto &i:dominoes){
                sort(i.begin(),i.end());
                mp[i]+=1;
            }
    
            for(auto &i: mp){
                if(i.second > 1){
                    cnt+=(i.second*(i.second-1))/2;       
                }
            }
            return cnt;
        }
    };