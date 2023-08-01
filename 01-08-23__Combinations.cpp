class Solution {
public:
    // Two Approachs : Recursion and memoization
    vector<vector<int>> dp[21][21];
    vector<vector<int>> solve(int n, int k){
        if(n==0||k==0)return {{}};
        if(n==k){
            vector<int>temp;
            for(int i=1;i<=n;i++){
                temp.push_back(i);
            }
            return {{temp}};
        }
        if(dp[n][k].size()>0)return dp[n][k];
        vector<vector<int>>temp1=solve(n-1,k);
        vector<vector<int>>temp2=solve(n-1,k-1);
        for(int i=0;i<temp2.size();i++){
            temp2[i].push_back(n);
            temp1.push_back(temp2[i]);
        }
        return dp[n][k]=temp1;
    }
        vector<vector<int>> combine(int n, int k) {
        
            return solve(n,k);
        
        }
};