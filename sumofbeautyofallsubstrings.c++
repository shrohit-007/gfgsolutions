
class Solution {
  public:
    int beautySum(string s) {
          
          int n=s.length();
          int ans=0,mn=INT_MAX,mx=0;
          for(int i=0;i<n;i++)
          {
              vector<int>v(26,0);
              for(int j=i;j<n;j++)
              {
                  v[s[j]-'a']++;
                  for(int k=0;k<26;k++)
                  {
                     if(v[k]>=1)
                     mn=min(v[k],mn);
                     mx=max(v[k],mx);
                  }
                  ans+=mx-mn;
                  mn=INT_MAX,mx=0;
              }
          }
          return ans;
    }
};
