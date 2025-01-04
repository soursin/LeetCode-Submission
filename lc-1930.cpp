class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> minIndex(26,INT_MAX);
        vector<int> maxIndex(26,INT_MIN);
        int cnt=0;
        for(int i=0;i<s.length();i++){
            minIndex[s[i]-'a'] = min(minIndex[s[i]-'a'],i);
            maxIndex[s[i]-'a'] = max(maxIndex[s[i]-'a'],i);
        }

        for(int i=0;i<26;i++){
            if(minIndex[i] == INT_MAX || maxIndex[i] == INT_MIN){
                continue;
            }

            unordered_set<char> st;
            for(int j=minIndex[i]+1;j<maxIndex[i];j++){
                    st.insert(s[j]);
            }
            cnt+=st.size();
        }
        return cnt;
    }
};