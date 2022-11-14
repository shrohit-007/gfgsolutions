
	public:
	int mod=1e9+7;
	int f(int ind,int sum,int arr[],vector<vector<int>>&dp)
	{
	    if(ind==0)
	    {
	        if(sum==0 and arr[0]==0)return 2;
	        if(sum==0 or sum==arr[0])return 1;
	        return 0;
	    }
	    if(dp[ind][sum]!=-1)
	    return dp[ind][sum]%mod;
	    int np=f(ind-1,sum,arr,dp)%mod;
	    int p=0;
	    if(arr[ind]<=sum)
	    p=f(ind-1,sum-arr[ind],arr,dp)%mod;
	    return dp[ind][sum]=(p+np)%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
	   // int mod=1e9+7;
        vector<vector<int>>dp(n+3,vector<int>(sum+3,0));
       // return f(n-1,sum,arr,dp);
       if(arr[0]==0)
       dp[0][0]=2;
       else
       dp[0][0]=1;
       if(arr[0]!=0)
       dp[0][arr[0]]=1;
       for(int i=1;i<=n;i++)
       {
           dp[i][0]=1;
       }
       for(int i=1;i<n;i++)
       {
           for(int j=0;j<=sum;j++)
           {
               dp[i][j]=dp[i-1][j]%mod;
               if(arr[i]<=j)
               dp[i][j]+=dp[i-1][j-arr[i]]%mod;
           }
       }return dp[n-1][sum]%mod;
	}
	  
};
