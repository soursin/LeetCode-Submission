class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool res=false;
        for(int i=0;i<arr.size();i++){
            auto it = find(arr.begin(),arr.end(),arr[i]*2);
            if(it != arr.end() && distance(arr.begin(),it)!=i){
                return true;
            }
        }
        return res;
    }
};