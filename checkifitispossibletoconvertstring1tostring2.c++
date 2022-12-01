// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        int c=0,c1=0;
        if(N!=M)return false;
        stack<char>st;
        for(int i=0;i<N;i++)
        {
            if(S[i]!='#')
            st.push(S[i]);
        }
        for(int i=N-1;i>=0;i--)
        {
            if(T[i]!='#')
            {
                if(st.empty())
                return false;
                if(st.top()!=T[i])
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
        if(st.empty())
        return true;
        else
        return false;
    }
};
