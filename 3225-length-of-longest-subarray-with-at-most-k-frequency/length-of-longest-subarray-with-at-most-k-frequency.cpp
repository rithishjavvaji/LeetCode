class Solution {
public:
    int maxSubarrayLength(vector<int>& v, int k) {
        int n=v.size(),i=0,j=0,ans=0;
        unordered_map<int,int> um;
        // um[v[i]]++;
        for(;j<n;j++){
            while(um[v[j]]>=k && i<n){
                // cout<<i<<" "<<j<<endl;
                ans=max(ans,j-i);
                um[v[i]]--;
                i++;
            }
            um[v[j]]++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};