class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    vector<pair<int,int>>pf(nums.size(),{1,1});
	    for(int i=0;i<nums.size();i++)
	    {
	        int x=0;
	        for(int j=0;j<i;j++)
	        {
	            if(nums[j]<nums[i])
	            {
	               x=max(x,pf[j].first);
	            }
	        }pf[i].first=x+1;
	    }
	    for(int i=nums.size()-1;i>=0;i--)
	    {
	        int x=0;
	        for(int j=nums.size()-1;j>i;j--)
	        {
	            if(nums[j]<nums[i])
	            x=max(x,pf[j].second);
	        }pf[i].second=x+1;
	    }
	    int ans=0;
	    for(int i=0;i<nums.size();i++)
	    {
	        int x=0;
	        for(int j=i+1;j<nums.size();j++)
	        {
	            if(nums[j]<nums[i])
	            x=max(x,pf[j].second);
	        }
	        ans=max(ans,x+pf[i].first);
	    }return ans;
	    
	}
};
