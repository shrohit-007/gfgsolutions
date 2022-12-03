class Solution{
    public:
    string rearrange (string s, int n)
    {
        vector<int>vowel(26,0),consonant(26,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
            {vowel[s[i]-'a']++;c++;}
            else
            consonant[s[i]-'a']++;
        }
        int c1=n-c;
        if(abs(c-c1)>=2)return "-1";
        string ans="";
            string s1="",s2="";
            for(int i=0;i<26;i++)
            {
                for(int j=0;j<vowel[i];j++)
                {
                    s1+=char(i+'a');
                }
            }
            for(int i=0;i<26;i++)
            {
                for(int j=0;j<consonant[i];j++)
                {
                    s2+=char(i+'a');
                }
            }
            int k=0,j=0;
           // cout<<c<<" "<<c1<<endl;
            for(int i=0;i<n;i++)
            {
                if(i%2==0 and c<c1)
                {
                    ans+=s2[j];j++;
                }
                else if(c<c1)
                {
                    ans+=s1[k];k++;
                }
                if(c>=c1 and i%2==0)
                {
                    ans+=s1[k];k++;
                }
                else if(c>=c1)
                {
                    ans+=s2[j];j++;
                }
            }
            return ans;
        
        
    }
};
