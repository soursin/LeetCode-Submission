class Solution {
    public:
        map<int,vector<int>> mp;
        void sumDigit(int num){
            int res=0;
            int temp = num;
            while(temp>0){
                res+=temp%10;
                temp/=10;
            }
            mp[res].push_back(num);
        }
        int maximumSum(vector<int>& nums) {
            for(int i=0;i<nums.size();i++){
                sumDigit(nums[i]);
            }
            
            int res=-1;
            for(auto &i: mp){
                if(i.second.size()>=2){
                    sort(i.second.begin(),i.second.end());
                    res=max(res,i.second[i.second.size()-1] + i.second[i.second.size()-2]);
                }
            }
    
            return res;
        }
    };


    