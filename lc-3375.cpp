class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            unordered_set<int> s;
            for(auto &i:nums){
                if(i> k){
                    s.insert(i);
                }else if(i < k){
                    return -1;
                }
            }
            return  s.size();
        }
    };