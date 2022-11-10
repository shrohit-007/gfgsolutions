class Solution {
public:
    string isSumOfTwo(int N){
        set<int>s;
        if(N>=2)
        s.insert(2);
        if(N>=3)
        s.insert(3);
        for(int i=2;i<=N;i++)
        {
            int f=0;
            for(int j=2;j*j<N;j++)
            {
                if(i%j==0)
                {
                    f=1;
                    break;
                }
            }
            if(!f)
            s.insert(i);
        }
        for(auto &it:s)
        {
            int x=N-it;
            
            if(s.find(x)!=s.end())
            {
                return "Yes";
            }
        }
        return "No";
    }
};
