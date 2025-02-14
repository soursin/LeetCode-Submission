class ProductOfNumbers {
    public:
        vector<int> st;
        vector<long long> pref;
        
        ProductOfNumbers() {
        }
        
        void add(int num) {
            st.push_back(num);
            if(num==0){
                pref.clear();
            }else{
                int n = pref.size();
                if(n==0){
                    pref.push_back(num);
                }else{
                    pref.push_back(num*pref[n-1]);
                }
            }
            
        }
        
        int getProduct(int k) {
            int n = pref.size();
            if(n>k)
                return pref[n-1]/pref[n-k-1];
            if(n==k){
                return pref[n-1];
            }
            return 0;
        }
    };
    
  