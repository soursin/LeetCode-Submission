class Solution {
    public:
        int countCompleteSubarrays(vector<int>& nums) {
            set<int> s;
            for(auto &i: nums){
                s.insert(i);
            }
            int count = s.size(),cnt=0;
    
            for(int i=0;i<nums.size();i++){
                set<int> s;
                for(int j=i;j<nums.size();j++){
                    s.insert(nums[j]);
                    if(s.size() == count){
                        cnt+=1;
                    }
                }
                
            }
            return cnt;
    
        }
    };