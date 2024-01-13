class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        unordered_map<int,int> um;
        for(auto c:s) um[c]++;
        for(auto c:t){
            if(um.find(c)==um.end()) ans++;
            else{
                um[c]--;
                if(um[c]==0) um.erase(c);
            }
        }
        return ans;
    }
};