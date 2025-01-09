class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string check = words[i];
            int ans = check.find(pref);
            if(ans ==0){
                cnt+=1;
            }
        }
        return cnt;
    }
};