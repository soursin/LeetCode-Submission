class Solution {
public:
    string clearDigits(string s) {
        string res="";
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                if(!isdigit(s[i]))
                    st.push(s[i]);
            }else{
                if(isdigit(s[i])){
                    if(!st.empty()){
                        char x = st.top();
                        st.pop();
                    } 
                }else{
                    st.push(s[i]);
                }
            }
        }

        while(!st.empty()){
            res+=st.top();
            st.pop();
        }

        reverse(res.begin(),res.end());

        return res;
    }
};