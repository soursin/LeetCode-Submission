class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int  n = nums.size();
        int subSum=0;
        int res=0,i=0;
        for(;i<n-1;i++){
           if(nums[i]<nums[i+1]){
                subSum+=nums[i];
           }else{
                res=max(res,max(nums[i],subSum+nums[i]));
                subSum=0;
           }
        }
        subSum += nums[n-1];
        res = max(res,subSum);
        return res;
    }
};