//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
	    vector<int>ans;
		int row=0,col=0;
		while(col<N)
		{
		    row=0;
		    int col1=col;
		    while(row<N and col1>=0)
		    {
		        ans.push_back(A[row][col1]);
		        row++;
		        col1--;
		    }
		    col++;
		}
		col=N-1;
		row=1;
		while(row<N)
		{
		    col=N-1;
		    int row1=row;
		    while(row1<N and col>=0)
		    {
		        ans.push_back(A[row1][col]);
		        row1++;
		        col--;
		    }
		    row++;
		}
		
		return ans;
		
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends
