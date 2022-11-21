	public:
	void f(int n,int sum,vector<int>&v,vector<vector<int>>&ans,set<int>&st)
	{
	    if(sum==0)
	    {
	        ans.push_back(v);
	    }
	    for(int i=n;i>=1;i--)
	    {
	        if(sum>=i)
	        {
	                int x=*(st.begin());
	                if(i<=x)
	                {
	                    st.insert(i);
	                    v.push_back(i);
	                    f(i,sum-i,v,ans,st);
	                    v.pop_back();
	                    st.erase(i);
	                }
	        }
	    }
	}
    vector<vector<int>> UniquePartitions(int n) {
        vector<int>v; 
        set<int>st;
        st.insert(35);
        vector<vector<int>>ans,ans1;
        f(n,n,v,ans,st);
        return ans;
    }
};
