
  public:
	int minDifference(int arr[], int n)  { 
	    int ans=INT_MAX;
        if(n==1)
        return arr[0];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        vector<vector<int>>dp(n,vector<int>(sum+1,0));
        dp[0][arr[0]]=1;
        dp[0][0]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(j==0)
                dp[i][j]=1;
                else
                {
                    int np=dp[i-1][j];
                    int p=false;
                    if(arr[i]<=j)
                    p=dp[i-1][j-arr[i]];
                    dp[i][j]=p|np;
                }
            }
        }
        vector<int>v;
        for(int i=0;i<=sum/2+1;i++)
        {
            if(dp[n-1][i])
            v.push_back(i);
        }
        for(int i=0;i<v.size();i++)
        ans=min(ans,abs(sum-2*v[i]));
        return ans;
        
        

 }
};
