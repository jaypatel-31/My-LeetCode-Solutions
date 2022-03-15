// 71. Simplify Path
class Solution {
public:
    string simplifyPath(string path) {
        path = path + "/";
         stack<string> st;
        vector<string> v;
        string ans = "";
        string t = "";
        for(char c : path){
            if(c == '/'){
                if(t == ".."){
                    if(!st.empty()) {
                        st.pop();
                    }
                }
                else if( t!=""  &&  t!="."){
                    st.push(t);
                   // v.push_back(t);
                }
                t = "";
            }
            else{
                t = t + c;
               // cout<<c<<" "<<t<<endl;
            }
        }
        //
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        for(string s : v){
            ans = ans + "/" + s;
        }
        if(ans !="") return ans;
        
        return "/";
    }
};
