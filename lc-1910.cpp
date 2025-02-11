class Solution {
public:
    string removeOccurrences(string s, string part) {
        string st = ""; 
        int k = part.length();

        for (char ch : s) {
            st.push_back(ch);  
            
            if (st.size() >= k && st.substr(st.size() - k, k) == part) {
                st.erase(st.size() - k, k); 
            }
        }
        return st;
    }
};