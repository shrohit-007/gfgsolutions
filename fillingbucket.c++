  public:
  int mod=1e8;
    int fillingBucket(int N) {
        vector<int>dp(N+4,0);
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=N;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        return dp[N];
    }
};
