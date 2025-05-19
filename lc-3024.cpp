class Solution {
    public:
        string triangleType(vector<int>& nums) {
            int a = nums[0] , b = nums[1] ,c =nums[2];
            if(a+b <= c || b+c <= a || c+a <=b){
                return "none";
            }
            if(a ==b && b == c && c == a){
                return "equilateral";
            }else if((a == b && b!=c && a!=c) || (b == c && b!=a && c!=a) || (a==c) && c!=b && a!=b){
                return "isosceles";
            }else{
                return "scalene";
            }
        }
    };