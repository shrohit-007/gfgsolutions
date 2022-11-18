
class Solution{
    public:
    void dfs(Node *root,int level,vector<vector<int>>&v)
    {
        if(root==NULL)
        return;
        v[level].push_back(root->data);
        dfs(root->left,level+1,v);
        dfs(root->right,level+1,v);
    }
    bool areAnagrams(Node *root1, Node *root2)
    {
        vector<vector<int>>v(1e4+4);
        vector<vector<int>>v1(1e4+4);
        dfs(root1,0,v);
        dfs(root2,0,v1);
        for(int i=0;i<1e4+4;i++)
        {
            sort(v[i].begin(),v[i].end());
            sort(v1[i].begin(),v1[i].end());
        }
        for(int i=0;i<1e4+4;i++)
        {
            if(v[i]!=v1[i])
            return false;
        }return true;
    }
};
