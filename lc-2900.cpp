class Solution {
    public:
        vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
            vector<string> res;
            res.push_back(words[0]);
            int n = words.size();
            for(int i=1;i<=n-1;i++){
                if(groups[i] != groups[i-1]){
                    res.push_back(words[i]);
                }
            }
            return res;
        }
    };