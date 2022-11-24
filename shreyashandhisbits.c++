//User function Template for C++
#include<bits/stdc++.h>
class Solution{
public:
    
    long long count(long long x) {
        // Code Here
        long long ans=0;
        long long b=0,temp=x;
        int cnt=0;
        vector<int>ones,bits;
        while(x)
        {
           if(x&1)
           {
               cnt++;
               ones.push_back(cnt);
               bits.push_back(b);
           }
           b++;
           x>>=1;
        }
        vector<vector<long long>>ncr(b+1,vector<long long>(b+1,0));
        ncr[0][0]=1;
        for(int i=1;i<=b;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 or j==i)ncr[i][j]=1;
                else
                ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
            }
        }
        for(int i=0;i<ones.size();i++)
        {
            ans+=ncr[bits[i]][ones[i]];
        }return ans;
        
    }
};
