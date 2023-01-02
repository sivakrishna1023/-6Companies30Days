class Solution {
public:
    int maxRotateFunction(vector<int>& nums)
    {
        int n=nums.size(); int sum=0;int f0=0;int dp[n];int ans=INT_MIN;
        if(n==1)
        return 0;
        for(int i=0;i<n;i++)
        sum+=nums[i];
        for(int i=0;i<n;i++)
        f0+=(i*nums[i]);
        dp[0]=f0;ans=dp[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=dp[i-1]+sum-(n*nums[n-i]);
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
//problem link: https://leetcode.com/problems/rotate-function/
