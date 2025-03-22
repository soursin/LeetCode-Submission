class Solution {
    public:
        int edge=0,node=0;
        void dfs(vector<vector<int>>& graph,int u,vector<bool>& visit){
            if(visit[u]){
                return ;
            }
            visit[u]=true;
            node+=1;
            edge+=graph[u].size();
            for(auto &neigh: graph[u]){
                if(!visit[neigh]){
                    dfs(graph,neigh,visit);
                }
            }
        }
    
        int countCompleteComponents(int n, vector<vector<int>>& edges) {
            vector<vector<int>> graph(n);
            vector<bool> visit(n,false);
            for(auto &i:edges){
                int u=i[0],v=i[1];
                graph[u].push_back(v);
                graph[v].push_back(u);
            }
            int cnt=0;
            for(int i=0;i<n;i++){
                if(!visit[i]){
                    node=0,edge=0;
                    dfs(graph,i,visit);
                    cnt+=(node*(node-1) == edge);
                }
            }
        
            return cnt;
        }
    };