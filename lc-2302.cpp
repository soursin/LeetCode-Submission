class Solution {
    public:
        long long countSubarrays(vector<int>& nums, long long k) {
            long long cnt=0,sum=0;
            int i=0,j=0,n = nums.size();
    
            for(;i<n;i++){
                sum+=nums[i];
    
                while(sum*(i-j+1) >= k){
                    sum-=nums[j++];
                }
    
                cnt+=(i-j+1);
            }
           
    
            return cnt;
        }
    };