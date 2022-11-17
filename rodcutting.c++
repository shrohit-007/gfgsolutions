
class Solution{
  public:
  int dp[1003][1003];
    /*int f(int ind,int n,int arr[],int n1)
    {
        if(ind==n)
        {
            return 0;
        }
        if(dp[ind][n1]!=-1)
        return dp[ind][n1];
        int ntake=f(ind+1,n,arr,n1);
        int take=-1e9;
        if(n1>=(ind+1))
        take=arr[ind]+f(ind,n,arr,n1-ind-1);
        return dp[ind][n1]=max(take,ntake);
    }*/
    int cutRod(int price[], int n) {
        memset(dp,0,sizeof(dp));
       // return f(0,n,price,n);
       
       // //tabulation
       /*for(int i=0;i<n;i++)
       {
           for(int j=0;j<=n;j++)
           {
                if(i==0)
                {
                    dp[0][j]=j*price[0];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],(i+1<=j?price[i]+dp[i][j-i-1]:0));
                }
           }
       }
       return dp[n-1][n];*/
       // space optimization with 2 1d array
      /* vector<int>prev(n+1,0),curr(n+1,0);
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<=n;j++)
           {
               if(i==0)
               {
                   prev[j]=j*price[0];
               }
               else
                {
                    curr[j]=max(prev[j],(j>i?price[i]+curr[j-i-1]:INT_MIN));
                }
           }
           if(i!=0)
           prev=curr;
       }return prev[n];*/
       
       // space optmization with 1d 1 array;
       vector<int>dp(n+1,0);
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<=n;j++)
           {
               if(i==0)
               dp[j]=j*price[0];
               else
               {
                   dp[j]=max(dp[j],(j>i?price[i]+dp[j-i-1]:0));
               }
           }
       }return dp[n];
       
       
    }
};
