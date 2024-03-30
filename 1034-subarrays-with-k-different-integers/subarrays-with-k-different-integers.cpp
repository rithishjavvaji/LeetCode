class Solution {
public:
    int atMostK(vector<int> &v,int k){
        int i=0,j,n=v.size(),ans=0;
        unordered_map<int,int> um;
        for(j=0;j<n;j++){
            um[v[j]]++;
            while(um.size()>k){
                um[v[i]]--;
                if(um[v[i]]==0) um.erase(v[i]);
                i++;
            }
            ans+=j-i+1;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& v, int k) {
        return atMostK(v,k)-atMostK(v,k-1);
    }
};