class Solution{
public:
	// #define ll long long

	ll countSubarray(int arr[], int n, int k) {
	    ll ans=0;
	    ll lind=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>k)
	        {
	            lind=i;
	            ans+=lind+1;
	        }
	        else
	        {
	            ans+=lind+1;
	        }
	    }
	    return ans;
	}
};
