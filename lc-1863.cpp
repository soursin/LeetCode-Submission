class Solution {
    public:
    int res=0;
        void subset(vector<int>& nums,int idx,int& cnt){
            if(idx >= nums.size()){
                res+=cnt;
                return ;
            }
            
            cnt^=nums[idx];
            subset(nums,idx+1,cnt);
            cnt^=nums[idx];
            subset(nums,idx+1,cnt);
        }
        int subsetXORSum(vector<int>& nums) {
            int cnt=0;
            subset(nums,0,cnt);
            return res;
        }
    };