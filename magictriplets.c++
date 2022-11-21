	public:
	int countTriplets(vector<int>nums){
	    int cnt=0;
	    vector<pair<int,int>>v;
	    for(int i=0;i<nums.size();i++)
	    {
	        int c=0;
	        for(int j=0;j<i;j++)
	        {
	            if(nums[j]<nums[i])
	            c++;
	        }
	        v.push_back({nums[i],c});
	    }
	    for(int i=0;i<v.size();i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(nums[j]<nums[i])
	            {
	                cnt+=v[j].second;
	            }
	        }
	    }
	    return cnt;
	}
};
