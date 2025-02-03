class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt1=0,cnt2=0,cnt=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                cnt=max(cnt,i-cnt1+1);
            }else{
                cnt1=i;
            }if(nums[i-1]>nums[i]){
                cnt=max(cnt,i-cnt2+1);
            }else{
                cnt2=i;
            }
        }
        if(cnt==0){
            return 1;
        }
        return cnt;
    }
};