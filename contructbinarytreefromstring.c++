//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string s){
        int i=0;
        string tmp="";
        int n=s.length();
        while(i<n and s[i]!=')' and s[i]!='(')
        {
            tmp+=s[i];
            i++;
        }
        int x=stoi(tmp);
        Node *root=new Node(x);
        stack<Node*>st;
        int j=i+1;
        while(i<n)
        {
            string tmp="";
            j=i+1;
            while(j<n and s[j]!=')' and s[j]!='(')
            {
                tmp+=s[j];
                j++;
            }
            if(s[i]==')')
            {
                i++;
                st.pop();
                continue;
            }
            int x=stoi(tmp);
            if(st.empty())
            {
                if(root->left==NULL and s[i]=='(')
                {
                    Node *rt=new Node(x);
                    root->left=rt;
                    st.push(root->left);
                }
                else if(s[i]=='(')
                {
                    Node *rt=new Node(x);
                    root->right=rt;
                    st.push(root->right);
                }
            }
            else
            {
                if(s[i]=='(')
                {
                    Node *topele=st.top();
                    Node *next=new Node(x);
                    if(topele->left==NULL)
                    {
                        topele->left=next;
                    }
                    else
                    {
                        topele->right=next;
                    }
                    st.push(next);
                }
            }
            i=j;
        }
        return root;
        
    }
};
