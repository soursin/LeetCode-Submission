class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            int cnt=0;
            priority_queue<long,vector<long>,greater<long>> pq(nums.begin(),nums.end());
            while(pq.size()>=2 && !pq.empty()){
                long x = pq.top();
                pq.pop();
                long y = pq.top();
                pq.pop();
                
                if(x >= k && y >= k){
                    break;
                }
                long op = min(x,y)*2 + max(x,y);
                pq.push(op);
                cnt+=1;
            }
            return cnt;
        }
    };