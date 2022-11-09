  public:
  void generate(set<long long>&s,long long X,long long ele)
  {
      if(ele>X)
      {
          return;
      }
      s.insert(ele);
      int rem=ele%10;
      int x=rem-1;
      int y=rem+1;
      if(x>=0 and x<=9)
      generate(s,X,ele*10+x);
      if(y>=0 and y<=9)
      generate(s,X,ele*10+y);
  }
    long long jumpingNums(long long X) {
        set<long long>s;
        for(long long i=1;i<=9;i++)
        {
            generate(s,X,i);
        }
        auto it=s.lower_bound(X);
        if(*it==X)
        return X;
        it--;
        return *it;
    }
};
