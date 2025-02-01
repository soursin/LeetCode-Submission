class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool res = true;
        int n= nums.size();
        for(int i=0;i<n-1;i++){
            bool r1=nums[i]%2;
            bool r2=(nums[i+1]%2);
            if(r1 == r2){
                return false;
            }
        }
        return res;
    }
};