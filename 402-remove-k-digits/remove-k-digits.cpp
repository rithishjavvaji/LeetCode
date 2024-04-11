class Solution {
public:
    string removeKdigits(string s, int k) {
        string ans;
        if(s.size()==k) return "0";
        stack<char> st;
        int i=0;
        while(k>0 && i<s.size()){
            if(st.empty()){
                st.push(s[i]);
                i++;
                continue;
            }
            if(s[i]-'0'>=st.top()-'0'){
                st.push(s[i]);
                i++;
                continue;
            }
            if(s[i]-'0'<st.top()-'0'){
                st.pop();
                k--;
                continue;
            }
        }
        for(;i<s.size();i++) st.push(s[i]);
        while(!st.empty()){
            cout<<st.top()<<" ";
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        ans=ans.substr(0,ans.size()-k);
        int j=0;
        for(;j<ans.size();j++){
            if(ans[j]!='0') break;
        }
        return ans.substr(j,ans.size()-j)==""?"0":ans.substr(j,ans.size()-j);
    }
};