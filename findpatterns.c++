
class Solution{   
public:
    int numberOfSubsequences(string s, string t){
        // code here 
        string st="";
        int cnt=0,j=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            j=0;
            st="";
            for(int k=0;k<s.length();k++)
            {
                if(j<t.length() and s[k]==t[j])
                j++;
                else
                {
                    st+=s[k];
                }
            }
            if(j==t.length())
            cnt++;
            else
            break;
            s=st;
        }
        return cnt;
    }
};
