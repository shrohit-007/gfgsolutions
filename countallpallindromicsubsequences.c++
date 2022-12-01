class Solution{
    public:
    /*You are required to complete below method */
    int mod=1e9+7;
    //recursive
    /*int f(int i,int j,string &s,vector<vector<long long>>&dp)
    {
        if(i>=j)return i==j;
        if(dp[i][j]!=-1)return dp[i][j]%mod;
        if(s[i]==s[j])
        {
            dp[i][j]=1+(f(i+1,j,s,dp)%mod+f(i,j-1,s,dp)%mod);
        }
        else
        dp[i][j]=(mod+(f(i+1,j,s,dp)%mod+f(i,j-1,s,dp)%mod)%mod-f(i+1,j-1,s,dp)%mod);
        dp[i][j]%=mod;
        return dp[i][j];
    }*/
    long long int  countPS(string s)
    {
       vector<vector<long long>>dp(s.length()+1,vector<long long>(s.length()+1,0));
       
      // return f(0,str.length()-1,str,dp);
      //tabulation
      int n=s.length();
      for(int i=0;i<n;i++)
      {
          dp[i][i]=1;
      }
      for(int i=n-2;i>=0;i--)
      {
         for(int j=i+1;j<n;j++)
         {
             if(s[i]==s[j])
             dp[i][j]=(1+dp[i+1][j]+dp[i][j-1])%mod;
             else
             dp[i][j]=(mod+dp[i+1][j]%mod+dp[i][j-1]%mod-dp[i+1][j-1])%mod;
         }
      }
      return dp[0][n-1];
    }
     
};
