class Solution {
    public:
        int equal(string s){
            int n = s.length();
            if(n%2 == 1){
                return 0;
            }
    
            int s1=0 , s2 = 0;
            int i=0,j=s.length()-1;
            while(i<j){
                if(i==j){
                    break;
                }
                s1+=s[i]-'0';
                s2+=s[j]-'0';
                i++;
                j--;
            }
    
            return s1==s2;
        }
        int countSymmetricIntegers(int low, int high) {
            int cnt=0;
    
            for(int i=low;i<=high;i++){
                cnt+=equal(to_string(i));
            }
    
            return cnt;
        }
    };