class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            int n = nums.size();
            int cnt=0;
            map<int,int> mp;
            for(auto &i: nums){
                mp[i]+=1;
            }
            for(auto &i: mp){
                if(i.second > 1){
                    cnt+=i.second/2;
                }
            }
            if(cnt*2 >= n){
                return true;
            }
            return false;
        }
    };