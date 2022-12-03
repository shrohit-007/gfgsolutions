// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int> &v) {
    
        // Write your code here
        int k1=k;
        int s=0,e=1e9;
        int ans=0;
        sort(v.begin(),v.end());
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int tmp=v[0];
            int k=k1;
            for(int i=1;i<n;i++)
            {
               if(v[i]-tmp<mid)
               continue;
               else
               {
                   k--;
                   tmp=v[i];
               }
            }
            if(k<=1)
            {
                ans=mid;
                s=mid+1;
            }
            else
            e=mid-1;
        }
        return ans;
    }
};
