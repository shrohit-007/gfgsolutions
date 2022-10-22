public:
    map<int,int>m1;
    void generate(int i,int n,int m,int num,int &ans)
    {
        if(num>m or num<0 or i<0 or i>9)
        {
            return;
        }
        if(num>=n and num<=m and m1.find(num)==m1.end())
        {
            ans++;
            m1[num];
        }
        generate(i-1,n,m,num*10+i-1,ans);
        generate(i+1,n,m,num*10+i+1,ans);
    }
    int steppingNumbers(int n, int m)
    {
        m1.clear();
        int ans=0;
        for(int i=0;i<=9;i++)
        {
            generate(i,n,m,0,ans);
        }
        return ans;
    }
};
