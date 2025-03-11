class Solution {
    public:
        int solve(string s,int k){
            int left=0,right=0,cnt=0,total=0;
            int n = s.length();
            unordered_map<char,int> ump;
            for(;right<n;right++){
                
                ump[s[right]]+=1;
            
                while(ump.size() ==k){
                    cnt+=n-right;
                    // cout<<s.substr(left,right-left+1)<<"\n";
                    ump[s[left]]-=1;
                    if(ump[s[left]] ==0){
                        ump.erase(s[left]);
                    }
                    left+=1;
                }
            }
            return cnt;
        }
        int numberOfSubstrings(string s) {
            return solve(s,3);
        }
    };