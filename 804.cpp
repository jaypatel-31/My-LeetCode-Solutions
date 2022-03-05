// 804. Unique Morse Code Words
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        
        set<string> st;
        for(string word : words){
            string s="";
            for(char a : word){
                s = s + arr[a - 'a'];
            }
            st.insert(s);
            
        }
        
        return st.size();
        
        
    }
};
