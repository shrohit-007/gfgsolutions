

//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int n, int m)
{
    // write code here
    long long ans=0;
    long long mod=1e9+7;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int x=i,y=j;
            int c=1;
            if(x-1>=1 and y-2>=1)c++;
            if(x+1<=n and y-2>=1)c++;
            if(x+2<=n and y-1>=1)c++;
            if(x+2<=n and y+1<=m)c++;
            if(x+1<=n and y+2<=m)c++;
            if(x-1>=1 and y+2<=m)c++;
            if(x-2>=1 and y-1>=1)c++;
            if(x-2>=1 and y+1<=m)c++;
            ans+=n*m-c;
            ans%=mod;
        }
    }return ans;
}
