//Problem Number - 1249
//Problem Name -Minimum Remove to Make Valid Parentheses

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if( s[i] == '(' ) st.push(i);
            else if(s[i] == ')'){
                if(st.empty()) s[i]='#';
                else st.pop();
            }
        }
        
        while(!st.empty()){
            int i = st.top();
            s[i] = '#';
            st.pop();
        }
        
        s.erase(remove(s.begin(), s.end(), '#'), s.end());
        
        return s;
       
    }
};
