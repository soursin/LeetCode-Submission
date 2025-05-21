class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int row = matrix.size() , col = matrix[0].size();
            queue<pair<int,int>> q;
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    if(matrix[i][j] == 0){
                        q.push({i,j});
                    }
                }
            }
    
            while(!q.empty()){
                auto [curr_row,curr_col] = q.front();
                q.pop();
    
                for(int i=0;i<col;i++){
                    matrix[curr_row][i] = 0;
                }
    
                for(int i=0;i<row;i++){
                    matrix[i][curr_col]=0; 
                }
            }
    
        }
    };