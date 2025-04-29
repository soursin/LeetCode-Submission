class Solution {
    public:
        long long countSubarrays(vector<int>& nums, int k) {
            int i=0,j=0,n=nums.size();
            int target=*max_element(nums.begin(),nums.end());
            long long cnt =0;
            long long res=0;
            for(;i<n;i++){
                if(nums[i] == target){
                    cnt++;
                }
                while(cnt >=k){
                    if(nums[j] == target){
                        cnt--;
                    }
                    j++;
                }
                
                res+=j;
            }
            return res;
        }
    };