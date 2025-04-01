class Solution {
    public:
        long long t[100001];
        long long solve(vector<vector<int>>& questions,int idx,int n){
            if(idx >=n){
                return 0;
            }
    
            if(t[idx] != -1){
                return t[idx];
            }
    
            long long take = questions[idx][0] + solve(questions,idx +1 + questions[idx][1],n);
            long long skip = solve(questions,idx+1,n);
            return t[idx] = max(take,skip);
        }
    
        long long mostPoints(vector<vector<int>>& questions) {
            int n = questions.size();
            memset(t,-1,sizeof(t));
            return solve(questions,0,n);
        }
    };