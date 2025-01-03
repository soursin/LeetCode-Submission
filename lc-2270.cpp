class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int cnt=0, n=nums.size();
        long long sum = accumulate(nums.begin(),nums.end(),0LL);
        long long pref=0;
        for(int i=0;i<n-1;i++){
            pref+=nums[i];
            if(pref >= (sum - pref)){
                cnt+=1;
            }
        }
        return cnt;
    }
};