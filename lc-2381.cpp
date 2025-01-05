class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> arr(s.length()+1,0);
        for(int i=0;i<shifts.size();i++){
            int start=shifts[i][0],end=shifts[i][1],dir=shifts[i][2];
            if(shifts[i][2] == 0){
               arr[start]-=1;
               arr[end+1] +=1;
            }else{
                arr[start]+=1;
                arr[end+1]-=1;
            }
        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans+=arr[i];
            arr[i]=ans;
        }
       
        
        for(int i=0;i<s.length();i++){
            int value =(s[i]-'a'+arr[i])%26;
            if(value<0){
                value+=26;
            }
            s[i] = char(value%26 + 'a');
        }
        return s;
    }
};