class Solution {
public:
    int minOperations(vector<int>& v) {
        unordered_map<int,int> um;
        for(auto c:v) um[c]++;
        int ans=0;
        for(auto it:um){
            if(it.second==1) return -1;
            else if(it.second%3==0) ans+=it.second/3;
            else if(it.second%3==2) ans+=1+it.second/3;
            else ans+=2+(it.second-4)/3;
        }
        return ans;
    }
};