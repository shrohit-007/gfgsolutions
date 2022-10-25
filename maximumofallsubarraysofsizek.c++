
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int>ans;
        multimap<int,int>m;
        for(int i=0;i<k;i++)
        {
            m.insert({-1*arr[i],i});
        }
        ans.push_back(m.begin()->first*-1);
        for(int i=k;i<n;i++)
        {
            m.insert({-1*arr[i],i});
            auto it=m.begin();
            auto it1=it;
            while(abs(it->second-i)>=k)
            {
                it++;
                m.erase(it1);
                it1=it;
            }
            ans.push_back(it->first*-1);
        }
        return ans;
    }
};
