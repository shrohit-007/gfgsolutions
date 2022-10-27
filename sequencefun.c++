
class Solution {
	public:
	    long long mod=1e9+7;
		int NthTerm(int n){
		    long long ans=1;
		    for(int i=1;i<=n;i++)
		    {
		        ans=(ans%mod)*i+1;
		        ans%=mod;
		    }
		    return ans;
		}

};
