class Solution {
public:


    int  ngt(vector<int>&nums,int target,vector<int>&dp)
    {
        int ans=0;
        if(dp[target]!=-1)return dp[target];
        if(target==0)return 1;
        for(int i=0;i<nums.size();i++)
        {
            if(target-nums[i]>=0)
            ans+=ngt(nums,target-nums[i],dp);
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int>dp(target+1,-1);
        return ngt(nums,target,dp);
    }
};