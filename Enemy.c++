
class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            vector<int>xi,yi;
            if(k==0)
            {
                return n*m;
            }
            xi.push_back(1);
            yi.push_back(1);
            for(int i=0;i<k;i++)
            {
                int x=enemy[i][0];
                int y=enemy[i][1];
                xi.push_back(x);
                yi.push_back(y);
            }
            xi.push_back(n);
            yi.push_back(m);
            sort(xi.begin(),xi.end());
            sort(yi.begin(),yi.end());
            int xii=0,yii=0;
            for(int i=0;i<k+1;i++)
            {
                if(i==0 or i==k)
                {
                    xii=max(xii,xi[i+1]-xi[i]);
                    yii=max(yii,yi[i+1]-yi[i]);
                    continue;
                }
                xii=max(xii,xi[i+1]-xi[i]-1);
                yii=max(yii,yi[i+1]-yi[i]-1);
            }
            return xii*yii;
        }
};
