class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            int i=0,j=0,cnt=0,res=0;
            int n = colors.size();
            for(;i<n+k-1;i++){
                if(i>0 && colors[i%n]==colors[(i-1)%n]){
                    j=i;
                }
                if(i-j+1 >=k){
                   res+=1;
                }
            }
            return res;
        }
    };