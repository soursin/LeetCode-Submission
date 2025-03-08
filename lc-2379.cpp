class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int j=0,i=0,cnt=0,res=INT_MAX;
            int n = blocks.length();
            for(;i<n;i++){
                if(blocks[i] == 'W'){
                    cnt+=1;
                }
                if(i-j+1 == k){
                    res=min(res,cnt);
                    if(blocks[j]=='W'){
                        cnt-=1;
                    }
                    j+=1;
                }
            }
            return res;
        }
    };