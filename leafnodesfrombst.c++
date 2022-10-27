class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        stack<int>st;
        vector<int>ans;
        for(int i=0,j=1;i<N,j<N;i++,j++)
        {
            if(arr[i]>arr[j])
            {
                st.push(arr[i]);
            }
            else
            {
                int f=0;
                while(st.size()>0 and arr[j]>st.top())
                {
                    f=1;
                    st.pop();
                }
                if(f)
                ans.push_back(arr[i]);
            }
        }
        ans.push_back(arr[N-1]);
        return ans;
    }
};
