class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> pref;
        int cnt=0;
        for(int i=0;i<words.size();i++){
            int start = words[i][0];
            int end = words[i][words[i].length()-1];
            bool check1=false,check2=false;
            if(start == 'a' || start == 'e' || start == 'o' || start == 'i' || start =='u'){    check1=true;

            }
            if(end == 'a' || end == 'e' || end == 'o' || end == 'i' || end =='u'){    check2=true;

            }
            if(check1 && check2){
                cnt+=1;
            }
            pref.push_back(cnt);
        }
        for(auto &i: queries){
            int l= i[0],r=i[1];
            int diff=(l>0)?pref[r]-pref[l-1]:pref[r];
            ans.push_back(diff);
        }
        return ans;
    }
};