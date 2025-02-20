class Solution {
    public:
        string res="";
        string ans="";
        void dfs(int idx,int n,unordered_map<string,bool>& ump){
            if(idx>=n){
                if(ump.find(res) == ump.end()){
                    ans = res;
                    return ;
                }
                return ;
            }
    
            res.push_back('0');
            dfs(idx+1,n,ump);
            res.pop_back();
            res.push_back('1');
            dfs(idx+1,n,ump);
            res.pop_back();
    
        }
        string findDifferentBinaryString(vector<string>& nums) {
            unordered_map<string,bool> ump;
            for(auto &i: nums){
                ump[i]=true;
            }
            int n = nums.size();
            dfs(0,n,ump);
            return ans;
    
        }
    };