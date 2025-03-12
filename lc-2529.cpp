class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int pos=0,neg=0;
            int ans=INT_MAX;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<0){
                    neg+=1;
                }if(nums[i] > 0){
                    pos+=1;
                }
            }
            ans=max(pos,neg);
            return ans;
        }
    };