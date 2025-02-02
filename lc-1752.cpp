class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,pos=-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                cnt+=1;
                pos=i;
            }
        }
        if(cnt>1){
            return false;
        }else{
            int last = nums[n-1];
            if(cnt==1 && last <= nums[0]){
                return true;
            }else if(cnt==1 && last > nums[0]){
                return false;
            }
            return true;
        }
    }
};