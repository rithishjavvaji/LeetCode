class Solution {
public:
    string reversePrefix(string s, char ch) {
        int n=s.size();
        int j=n;
        for(int i=0;i<n;i++){
            if(s[i]==ch){
                j=i;break;
            }
        }
        if(j==n) return s;
        reverse(s.begin(),s.begin()+j+1);
        return s;
    }
};