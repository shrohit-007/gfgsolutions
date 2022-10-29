public:
    long long int power(long long int x,long long int y)
    {
        long long int res=1;
        while(y!=0)
        {
            if(y%2)
            {
                res*=x;
            }
            x*=x;
            y/=2;
        }
        return res;
    }
	long long int NoOfChicks(int n){
	    vector<long long int>v(38,0);
	    for(int i=0;i<6;i++)
	    {
	        v[i]=power(3,i);
	    }
	    for(int i=6;i<n;i++)
	    {
	        if(i==6)
	        {
	            v[i]=(v[i-1]-1)*3;
	        }
	        else
	        {
	            v[i]=(v[i-1]-(v[i-6]/3)*2)*3;
	        }
	    }
	    return v[n-1];
	    
	    
	    
	}
};
