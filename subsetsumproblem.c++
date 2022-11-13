
class Solution{   
public: 
// recursion 
/*
    bool f(int ind,vector<int>&arr,int sum,vector<vector<int>>&dp)
    {
        if(sum==0)return true;
        if(ind==0)return (arr[ind]==sum);
        if(dp[ind][sum]!=-1)
        return dp[ind][sum];
        bool npick=f(ind-1,arr,sum,dp);
        bool pick=false;
        if(arr[ind]<=sum)
        pick=f(ind-1,arr,sum-arr[ind],dp);
        return dp[ind][sum]=pick|npick;
    }
    */
    bool isSubsetSum(vector<int>arr, int sum){
       // vector<vector<bool>>dp(arr.size(),vector<bool>(sum+2,false));
       // return f(arr.size()-1,arr,sum,dp);
       //memoization;
       //dp[0][arr[0]]=true;
       // space optimization
       vector<int>prev(sum+1,0);
       vector<int>curr(sum+1,0);
       prev[0]=curr[0]=1;
       prev[arr[0]]=1;
       int n=arr.size();
       for(int i=1;i<n;i++)
       {
           for(int j=1;j<=sum;j++)
           {
                if(j==0)
                {
                   prev[j]=true;
                }
                else
                {
                    bool np=prev[j];
                    bool p=false;
                    if(arr[i]<=j)
                    p=prev[j-arr[i]];
                    curr[j]=p|np;
                }
           }
           prev=curr;
       }
       return prev[sum];
    }
    
};
