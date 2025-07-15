class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3){
            return false;
        }
    
        cout<<word<<"\n";
        bool vowel = false, cons = false;

        for(int i=0;i<word.length();i++){
            char temp = word[i];
            if(temp >= '0' && temp <= '9'){
                continue;
            }
            else if(temp >= 'A' && temp <= 'Z'){
                if(temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U'){
                    vowel = true;
                }else{
                    cons = true;
                }
                continue;
            }
            else if(temp >= 'a' && temp <= 'z'){
                if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u'){
                    vowel = true;
                }else{
                    cons = true;
                }
                continue;
            }else{
                return false;
            }
        }
        return cons && vowel;
    }
};