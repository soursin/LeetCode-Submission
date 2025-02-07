class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> res(n,0);
        map<unsigned,unsigned> color; 
        map<unsigned,unsigned> mp;
        int j=0;
        for(auto &i:queries){
            int ball = i[0], c = i[1];
            if(mp.count(ball) > 0){
                unsigned color1 = mp[ball];
                if( --color[color1] == 0)
                    color.erase(color1);
            }
            mp[ball]=c;
            color[c]++;
            res[j++] = color.size();
            
        }
        return res;
    }
};