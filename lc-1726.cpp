class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int prod = nums[i]*nums[j];
                cnt+=8*mp[prod];
                mp[prod]+=1;
                
            }
        }
        return cnt;
    }
};