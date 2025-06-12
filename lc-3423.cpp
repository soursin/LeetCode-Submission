class Solution {
    public:
        int maxAdjacentDistance(vector<int>& nums) {
            int n = nums.size(), result = 0;
            for(int i=0;i < n;i++){
                if(i == n-1){
                    result = max(result,abs(nums[i]-nums[0]));
                }else{
                    result=max(result , abs(nums[i] - nums[i+1]));
                }
            }
            return result;
        }
    };