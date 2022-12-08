class Solution
{
public:
    bool chkdivi(int n){
        if(n==1 || n==2) return false;
        if(floor(sqrt(n))!=ceil(sqrt(n))) return false;
        for(int i=2;i*i<n;i++){
            if(n%i==0) return false;
        }
        return true;
    }

    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        vector<int> ans;
        int num;
        
        for(int i=0;i<q;i++){
            num = query[i];
            int cnt=0;
            for(int j=1;j<=num;j++){
                 
                if(chkdivi(j)){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
