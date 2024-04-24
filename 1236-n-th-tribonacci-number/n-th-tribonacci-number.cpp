class Solution {
public:
    long long tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        long long curr,prev=1,prev1=1,prev2=0;
        for(int i=3;i<=n;i++){
            curr=prev+prev1+prev2;
            prev2=prev1;
            prev1=prev;
            prev=curr;
        }
        return curr;
    }
};