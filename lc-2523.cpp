class Solution {
    public:
        
        vector<int> closestPrimes(int left, int right) {
            vector<int> prime(right+1,true);
            prime[1]=false;
            prime[0]=false;
            for(int i=2;i*i<=right;i++){
                if(prime[i]){
                    for(int j=i*i;j<=right;j+=i){
                        prime[j]=false;
                    }
                }
            }
            int start=-1,end=-1,diff = INT_MAX,cnt=0;
            vector<int> res={-1,-1};
            for(int i=left;i<=right;i++){
                if(prime[i]){
                  if(start == -1){
                    start= i;
                  }else{
                    if(diff > (i-start)){
                        diff = i-start;
                        res={start,i};
                    }
                    start = i;
                  }
                  cnt+=1;
                }
            }
            if(cnt<2){
                return {-1,-1};
            }
            
            return res;
    
        }
    };