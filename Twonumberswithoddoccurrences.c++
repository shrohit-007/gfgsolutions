class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int N)  
    {
        long long xr=0,a=0,b=0;
        for(int i=0;i<N;i++)
        {
            xr^=arr[i];
        }
        int x=0;
        while(x>=0)
        {
            if((1<<x)&xr)
            {
                break;
            }
            x++;
        }
        for(int i=0;i<N;i++)
        {
            if((1<<x)&arr[i])
            {
                a^=arr[i];
            }
            else
            {
                b^=arr[i];
            }
        }
        vector<long long int>v={max(a,b),min(a,b)};
        return v;
    }
};
