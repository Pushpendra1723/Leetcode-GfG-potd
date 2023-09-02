class Solution {
public:
   int helper(string s,vector<string>&dic,int i,vector<int>&dp)
   {
       if(i==s.size())return dp[s.size()];
       if(dp[i]!=-1)return dp[i];
       int minR=INT_MAX;
       for(auto &it:dic)
       {
        int len=it.size();
        if(i+len<=s.size()&&s.substr(i,len)==it)
        {
            int take=helper(s,dic,i+len,dp);
            minR=min(minR,take);
        }
       }
       int not_take=1+helper(s,dic,i+1,dp); 

        
       
       return dp[i]=min(minR,not_take);
   }
    int minExtraChar(string s, vector<string>& dic) {
        vector<int>dp(s.size()+1,-1);
        dp[s.size()]=0;
        return helper(s,dic,0,dp);
    }
};