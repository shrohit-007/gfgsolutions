
struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        map<string,int>m;
        vector<alphanumeric>ans;
        for(int i=0;i<A.size();i++)
        {
            m[A[i]]++;
        }
        for(auto &it:m)
        {
            string st=it.first;
            ans.push_back({st,it.second});
        }
        return ans;
    }
};
