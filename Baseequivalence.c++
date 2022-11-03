class Solution {
  public:
    string baseEquiv(int n, int m){
        for(long long i=2;i<=32;i++)
        {
            long long x=pow(i,m-1);
            if(x<=n)
            {
                x*=i;
                x--;
                if(x>=n)
                {
                    return "Yes";
                }
            }
            else
            {
                return "No";
            }
        }
        return "No";
    }
};
