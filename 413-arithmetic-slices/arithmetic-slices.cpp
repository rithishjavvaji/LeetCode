class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& v) {
        int n=v.size(),ans=0;
        for(int i=0;i<n-1;i++){
            v[i]=v[i+1]-v[i];
        }
        int prev=v[0],c=1;
        for(int i=1;i<n-1;i++){
            if(v[i]==prev) c++;
            else if(c==1){
                prev=v[i];
                c=1;
            }
            else{
                prev=v[i];
                ans+=(c*(c-1)/2);
                c=1;
            }
        }
        if(c!=1) ans+=(c*(c-1)/2);
        return ans;
    }
};