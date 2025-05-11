class Solution {
    public:
        bool threeConsecutiveOdds(vector<int>& arr) {
            int i=0,j=0,n = arr.size();
            int cnt=0;
            for(;j<n;j++){
                if(arr[j]%2 !=0){
                    cnt++;
                }
                if(j-i+1 == 3){
                    if(cnt == 3){
                        return true;
                    }
                    if(arr[i]%2!=0){
                        cnt-=1;
                    }
                    i+=1;
                }
            }
            return false;
        }
    };