
class Solution {
  public:
    int maxGroupSize(int arr[], int N, int k) {
        set<int>v;
        map<int,int>M;
        for(int i=0;i<N;i++)
        {
            arr[i]%=k;
            M[arr[i]]++;
        }
        int ans=0;
        for(auto &it:M)
        {
            int ele=it.first;
            if(ele==0)
            {
                if(v.find(0)==v.end())
                {
                    v.insert(0);
                    ans++;
                }
            }
            else
            {
                int x=k-ele;
                if(x==ele)
                {
                    if(M[ele]>0)
                    {
                        ans++;
                    }
                    M[ele]=0;
                    continue;
                }
                if(v.find(x)==v.end())
                {
                    ans+=max(int(M[ele]),int(M[x]));
                    M[ele]=0;
                    M[x]=0;
                }
            }
        }
        return ans;
    }
};
