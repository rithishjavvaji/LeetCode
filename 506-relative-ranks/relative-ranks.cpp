class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& v) {
        int n=v.size();
        vector<int> temp = v;
        vector<string> ans;
        sort(temp.begin(),temp.end(),greater<int>());
        unordered_map<int,int> um;
        for(int i=0;i<n;i++){
            um[temp[i]]=i+1;
        }
        for(int i=0;i<n;i++){
            if(um[v[i]]==1)
            ans.push_back("Gold Medal");
            else if(um[v[i]]==2)
            ans.push_back("Silver Medal");
            else if(um[v[i]]==3)
            ans.push_back("Bronze Medal");
            else ans.push_back(to_string(um[v[i]]));
        }
        return ans;
    }
};