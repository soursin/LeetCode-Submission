class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> mp;
        for(auto &i : nums1){
            int a = i[0],b=i[1];
            if(mp.find(a) == mp.end()){
                mp[a]=b;
            }else{
                mp[a]+=b;
            }
        }
        for(auto &i : nums2){
            int a = i[0],b=i[1];
            if(mp.find(a) == mp.end()){
                mp[a]=b;
            }else{
                mp[a]+=b;
            }
        }
        vector<vector<int>> ans;
        for(auto &i: mp){
            ans.push_back({i.first,i.second});
        }
        return ans;
    }
};