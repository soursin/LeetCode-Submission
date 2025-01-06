class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.length(),0);
        for(int i=0;i<boxes.size();i++){
            int cnt=0;
            for(int j=0;j<boxes.size();j++){
                if(i!=j){
                    if(boxes[j]=='1')
                        cnt+=abs(i-j);
                }
            }
            ans[i]=cnt;
            cnt=0;
        }
        return ans;
    }
};