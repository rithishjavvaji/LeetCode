class Solution {
    vector<int> dir={0,1,0,-1,0};
public:
    bool isValid(int i,int j,vector<vector<char>> &v){
        return i<v.size() && j<v[0].size() && v[i][j]=='1';
    }
    void dfs(int i,int j,vector<vector<char>> &v){
        int n=v.size(),m=v[0].size();
        v[i][j]='0';
        for(int k=0;k<4;k++){
            if(isValid(i+dir[k],j+dir[k+1],v)) dfs(i+dir[k],j+dir[k+1],v);
        }
        return;
    }
    int numIslands(vector<vector<char>>& v) {
        int ans=0,n=v.size(),m=v[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]=='1'){
                    ans++;
                    dfs(i,j,v);
                }
            }
        }
        return ans;
    }
};