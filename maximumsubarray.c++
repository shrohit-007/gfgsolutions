//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    int ans=0;
	    int c=0;
	    int f=0;
	    vector<int>v;
	    vector<int>temp;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=0)
	        {
	            c+=a[i];
	            temp.push_back(a[i]);
	            f=1;
	        }
	        else
	        {
	            if(ans<c)
	            {
	                ans=c;
	                v=temp;
	            }
	            c=0;
	            temp.clear();
	        }
	    }
	    if(ans<c)
	    {
	        v=temp;
	    }
	    if(f)
	    {
	       return v;
	    }
	    else
	    {
	        v.clear();
	        v.push_back(-1);
	    }
	    return v;
	}
};
