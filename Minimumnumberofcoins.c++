
class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int>v={1,2,5,10,20,50,100,200,500,2000};
        vector<int>ans2;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(N>=v[i])
            {
                for(int j=0;j<N/v[i];j++)
                {
                    ans2.push_back(v[i]);
                }
                N%=v[i];
            }
        }
        return ans2;
        
    }
};
