class Solution {
public:
    int maxScore(string s) {
        int cnt1=0,cnt2=0,ans=0,n=s.length();
        vector<int> pref1(n,0);
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt1+=1;
            }
            pref1[i]=cnt1;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                cnt2+=1;
            }
            ans=max(ans , cnt2 + (pref1[n-1]-pref1[i]));
        }
        return ans;
    }
};