class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),i=n-1;
        while(s[i]==' ') i--;
        int ans=0;
        for(;i>=0;i--){
            if(s[i]==' ') return ans;
            ans++;
        }
        return ans;
    }
};