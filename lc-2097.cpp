class Solution {
public:
    void dfs(unordered_map<int,vector<int>>& graph,vector<int>& result,int node){

        while(graph[node].size()!=0){
            int neighbour = graph[node].back();
            graph[node].pop_back();
            dfs(graph,result,neighbour);
        }
        result.push_back(node);
    }

    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        unordered_map<int,vector<int>> graph;
        unordered_map<int,pair<int,int>> degree;
        vector<int> result;
        int start_node=-1;
        for(auto &pa : pairs){
            graph[pa[0]].push_back(pa[1]);
            degree[pa[0]].first+=1;
            degree[pa[1]].second+=1;
        }

        for(auto &i:degree){
            // cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<"\n";
            if(i.second.first>i.second.second){
                start_node = i.first;
            }
        }
        if(start_node==-1)
        {
            start_node = pairs[0][0];
        }
        cout<<"Start Node"<<" "<<start_node<<" "<<"\n";

        dfs(graph,result,start_node);
        vector<vector<int>> ans;
        reverse(result.begin(),result.end());
        for(auto &i:result){
            cout<<i<<" ";
        }
        for(int i=0;i<result.size()-1;i++){
            ans.push_back({result[i],result[i+1]});
        }

        return ans;

        
        
    }
};