class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        vector<int> dp;
        dp.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(dp.back()<v[i]) dp.push_back(v[i]);
            else{
                int k=lower_bound(dp.begin(),dp.end(),v[i])-dp.begin();
                dp[k]=v[i];
            }
        }
        return dp.size();
    }
};