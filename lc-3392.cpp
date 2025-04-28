class Solution {
    public:
        int countSubarrays(vector<int>& nums) {
            int cnt=0;
            int i=0,j=0,n = nums.size();
            for(;i<n;i++){
                if(i-j+1 == 3){ 
                    if((nums[i] + nums[j])*2 == (nums[i-1])){
                        cnt+=1;
                    }
                    j+=1;
                }
            }
            return cnt;
        }
    };