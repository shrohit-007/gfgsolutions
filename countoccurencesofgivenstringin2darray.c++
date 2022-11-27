//User function Template for C++

class Solution{
    public:
    int f(int ind,int i,int j,vector<vector<char>>&mat,string &target)
    {
        int ans=0;
        if(i>=0 and j>=0 and i<mat.size() and j<mat[0].size() and target[ind]==mat[i][j])
        {
            mat[i][j]='*';
            if(ind+1==target.length())
            {
                ans=1;
            }
            else
            {
                ans+=f(ind+1,i-1,j,mat,target);
                ans+=f(ind+1,i+1,j,mat,target);
                ans+=f(ind+1,i,j-1,mat,target);
                ans+=f(ind+1,i,j+1,mat,target);
            }mat[i][j]=target[ind];
        }
        return ans;
    }
    int findOccurrence(vector<vector<char> > &mat, string target){
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==target[0])
                {
                    ans+=f(0,i,j,mat,target);
                }
            }
        }
        return ans;
    }
};
