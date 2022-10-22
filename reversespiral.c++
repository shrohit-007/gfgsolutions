class Solution {
  public:
     vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
       vector<int> v;
        int direction = 0;
        int top=0,down=R-1,left=0,right=C-1;
        while(top<=down && left<=right){
            if(direction == 0){
                for(int i=left;i<=right;i++){
                    v.push_back(a[top][i]);
                }
                    top++;
            }else if(direction == 1){
                 for(int i=top;i<=down;i++){
                    v.push_back(a[i][right]);
                }
                    right--;
                
            }else if(direction == 2){
                 for(int i = right;i>=left;--i){
                    v.push_back(a[down][i]);
                    }
                    down--;
            }else if(direction == 3){
                     for(int i = down;i>=top;--i){
                    v.push_back(a[i][left]);
                }
                   left++;
                }
                direction = (direction + 1)%4;
            }
        
        reverse(v.begin(), v.end());
        return v;

    }
};
