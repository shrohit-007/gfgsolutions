class Solution {
  public:
    int splitArray(int arr[] ,int n, int k) {
        // code here
        int s=0,e=1e9+2;
        int ans2=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans2=max(ans2,arr[i]);
        }
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int sum=mid,c=k-1;
            for(int i=0;i<n;i++)
            {
                if(sum-arr[i]>=0)
                sum-=arr[i];
                else
                {
                    c--;
                    sum=mid-arr[i];
                }
            }
            if(c>=0)
            {
                e=mid-1;
                ans=mid;
            }
            else
            {
                s=mid+1;
            }
        }
        ans=max(ans,ans2);
        return ans;
    }
};
