class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> ban;
        for(auto &i:banned){
            if(i<=n){
                ban.insert(i);
            }
        }
        int sum=0;
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(ban.find(i) == ban.end()){
                if(sum+i<=maxSum){
                    sum+=i;
                    cnt+=1;
                }
            }
        }
        return cnt;
    }
};