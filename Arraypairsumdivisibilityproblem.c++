class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        if(nums.size()%2==1)return false;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]%=k;
        }
        vector<int>v(k+1,0);
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]++;
        }
        for(int i=0;i<=k;i++)
        {
            if(i%k==0)
            {
                if(v[i]%2!=0)return false;
            }
            else
            {
                if(v[i]!=v[k-i])return false;
            }
        }
        return true;
    }
};
