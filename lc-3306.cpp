class Solution {
    public:
        long long at(string word, int k){
            int i=0,j=0,n=word.length();
            long long cnt=0;
            map<char,int> mp;
            int vowel=0;
            int cont=0;
    
            for(;j<n;j++){
                if(word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u'){
                    mp[word[j]]+=1;
                }else{
                    cont+=1;
                }
                
                while(mp.size()==5 && cont >= k){
                    cnt+=n-j;
                       
                    if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
                        mp[word[i]]-=1;
                        if(mp[word[i]]==0){
                            mp.erase(word[i]);
                        }
                    }else{
                        cont-=1;
                    }
                    i+=1;
                }
            }
            return cnt;
        }
        long long countOfSubstrings(string word, int k) {
            return at(word,k) - at(word,k+1);
        }
    };