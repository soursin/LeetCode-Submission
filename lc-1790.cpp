class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n1 = s1.length() , n2 = s2.length();
        vector<int> idx;
        for(int i=0;i<n1;i++){
            if(s1[i] != s2[i]){
                idx.push_back(i);
            }
            if(idx.size() > 2)
                return false;
        }

        return idx.size() == 0 || (idx.size() ==2 && s1[idx[0]] == s2[idx[1]] && s1[idx[1]] == s2[idx[0]]);
      
      
    }
};