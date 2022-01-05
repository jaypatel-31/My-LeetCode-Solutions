//Problem Number - 946
//Problem Name - Validate Stack Sequences


class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
         
         stack<int> st;
         int m = pushed.size();
        int j = 0;
         for(int i=0;i<m;i++){
             st.push(pushed[i]);
             while(!st.empty() && st.top() == popped[j]){
                 st.pop();
                 j++;
             }
         }
        
        return st.size() == 0;
    }
};
