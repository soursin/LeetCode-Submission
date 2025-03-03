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

//Better Approach 
/*

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res(nums.size(),pivot);
        int left = 0 ,right = nums.size()-1;
        for(int i=0,j=nums.size()-1; i<nums.size();i++,j--){
            if(nums[i] < pivot){
                res[left] = nums[i];
                left++;
            }
            if(nums[j] > pivot){
                res[right] = nums[j];
                right--;
            }
        }
        return res;
    }
};

*/