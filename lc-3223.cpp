class Solution {
public:
    int minimumLength(string s) {
        map<int,int> ump;
        int cnt=s.length();
        for(auto &i:s){
            ump[i-'a']+=1;
            if(ump[i-'a']>=3){
                cnt-=2;
                ump[i-'a']-=2;
            }
        }
        return cnt;
    }
};