class Solution {
    public:
        int cnt=0;
        set<string> s;
        void dfs(string tiles,int idx,int n , string r,vector<bool> visit){
            if(idx>=n){
                if(s.find(r) == s.end()){
                    s.insert(r);
                    cnt+=1;
                }
                return ;
            }
    
            for(int i=0;i<n;i++){
                if(visit[i]==false){
                    r.push_back(tiles[i]);
                    visit[i]=true;
                    dfs(tiles,idx+1,n,r,visit);
                    r.pop_back();
                    visit[i]=false;
                }
            }
        }
        int numTilePossibilities(string tiles) {
            int n = tiles.length();
            vector<bool> visit(n,false);
            for(int i=0;i<n;i++){
                dfs(tiles,i,n,"",visit);
            }
            return cnt;
        }
    };