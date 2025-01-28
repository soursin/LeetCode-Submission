class Solution {
public:
    int bfs(vector<vector<bool>>& visit,vector<vector<int>> grid , int x,int y,int n,int m){
        vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
        int cnt = 0;
        queue<pair<int,int>> q;
        q.push({x,y});
        while(!q.empty()){
            auto top  = q.front();
            q.pop();
            int newX = top.first;
            int newY = top.second;
            visit[newX][newY] = true;
            cnt+=grid[newX][newY];
            for(auto& d: dir){
                int pq = newX + d[0];
                int qy = newY + d[1];

                if(pq >=0 && pq<n && qy>=0 && qy<m && visit[pq][qy]==false){
                    if(grid[pq][qy]!=0){
                        q.push({pq,qy});
                    }
                }
            }
            grid[newX][newY] = 0;
        }
        return cnt;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int n= grid.size() , m = grid[0].size();
        int res=0;
        vector<vector<bool>> visit;
        for(int i=0;i<n;i++){
            vector<bool> red;
            for(int j=0;j<m;j++){
                red.push_back(false);
            }
            visit.push_back(red);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] !=0){
                    res=max(res,bfs(visit,grid,i,j,n,m));
                }
            }
        }

        return res;
    }
};