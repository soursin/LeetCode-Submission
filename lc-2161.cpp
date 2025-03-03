class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> small,large,mid;
            for(auto &i:nums){
                if(i<pivot){
                    small.push_back(i);
                }else if(i==pivot){
                    mid.push_back(i);
                }else{
                    large.push_back(i);
                }
            }
            int idx=0;
            for(int i=0;i<small.size();i++){
                nums[idx++] = small[i];
            }
            for(int i=0;i<mid.size();i++){
                nums[idx++] = mid[i];
            }
            for(int i=0;i<large.size();i++){
                nums[idx++] = large[i];
            }
            return nums;
        }
    };