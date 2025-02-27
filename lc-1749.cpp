class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int res=INT_MIN, res2 =INT_MAX;
            int sum=0, sum2 =0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                res=max(res,sum);
                if(sum < 0){
                    sum = 0;
                }
            }
            for(int i=0;i<nums.size();i++){
                sum2 += nums[i];
                res2 = min(res2,sum2);
                if(sum2 > 0){
                    sum2 = 0;
                }
            }
    
            return max(res,abs(res2));
        }
    };