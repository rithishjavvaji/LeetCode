class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        vector<int> v;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!='(' && s[i]!=')') continue;
            else{
                if(s[i]=='(') st.push(s[i]);
                else{
                    if(st.empty()) v.push_back(i);
                    else st.pop();
                }
            }
        }
        if(st.size()){
            for(int i=n-1;i>=0 && st.size()>0;i--){
                if(s[i]=='('){
                    v.push_back(i);
                    st.pop();
                } 
            }
        }
        sort(v.begin(),v.end());
        string ans;
        int j=0;
        for(int i=0;i<n;i++){
            if(j<v.size() && v[j]==i) j++;
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};