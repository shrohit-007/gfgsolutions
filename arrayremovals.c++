
class Solution{
    public:
    int removals(vector<int>& arr, int k){
        sort(arr.begin(),arr.end());
        int ans=INT_MAX;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(arr[j]-arr[i]<=k)
                {
                    ans=min(ans,n-(j-i+1));
                    //cout<<ans<<endl;
                }
            }
        }
        return ans;
    }
};
