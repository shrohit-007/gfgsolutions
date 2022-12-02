

int CountPS(char S[], int N)
{
    vector<vector<int>>dp(N,vector<int>(N,0));
    long ans=0;
    for(int i=0;i<N;i++)
    {
        dp[i][i]=1;
        if(S[i]==S[i+1])dp[i][i+1]=1;
        if(i<N and dp[i][i+1]==1)
        ans++;
    }
    for(int i=N-3;i>=0;i--)
    {
        for(int j=i+2;j<N;j++)
        {
            if(S[i]==S[j] and dp[i+1][j-1]==1)
            dp[i][j]=1;
            if(dp[i][j])ans++;
        }
    }
    return ans;
    
}
