class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int res=-1;
        map<int,pair<int,int>> ma;
        map<int,int> row;
        map<int,int> col;
        int m = mat.size() , n = mat[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ma[mat[i][j]] = {i,j};
            }
        }

        for(int i=0;i<arr.size();i++){
            int val = arr[i];
            pair<int,int> p = ma[val];
            row[p.first]+=1;
            if(row[p.first] == n){
                res= i;
                break;            
            }
            col[p.second]+=1;
            if(col[p.second] == m){
                res = i;
                break;
            }
            // cout<<row[p.first]<<" "<<col[p.second]<<" "<<m<<" "<<n<<"\n";
        }

        return res;
    }
};