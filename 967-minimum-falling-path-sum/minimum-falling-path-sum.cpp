class Solution {
    vector<pair<int,int>> dir={{1,-1},{1,0},{1,1}};
public:
    bool isValid(int i,int j, vector<vector<int>> &v){
        int n=v.size();
        return i>=0 && j>=0 && i<n && j<n;
    }
    int solve(int i,int j,vector<vector<int>> &v,vector<vector<int>> &dp){
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        int n=v.size(),ans=INT_MAX;
        if(i==n-1) return dp[i][j]=v[i][j];
        for(int k=0;k<3;k++){
            if(isValid(i+dir[k].first,j+dir[k].second,v)) ans=min(ans,solve(i+dir[k].first,j+dir[k].second,v,dp));
        }
        return dp[i][j]=ans+v[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& v) {
        int n=v.size(),ans=INT_MAX;
        vector<vector<int>> dp(n+1,vector<int>(n+1,INT_MAX));
        for(int i=0;i<n;i++){
            ans=min(ans,solve(0,i,v,dp));
        }
        return ans;
    }
};