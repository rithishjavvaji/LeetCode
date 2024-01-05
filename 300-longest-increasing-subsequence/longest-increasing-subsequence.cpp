class Solution {
public:
    int lengthOfLIS(vector<int>& v){
        int n=v.size();
        vector<int> dp(n,1);
        // dp[0]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[i]>v[j]) dp[i]=max(1+dp[j],dp[i]);
            }
        }
        int ans=INT_MIN;
        for(auto c:dp) ans=max(ans,c);
        return ans;
    }
};