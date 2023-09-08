class Solution {
public:

    int function(int r,int c)
    {
        int res=1;
        for(int i=0;i<c;i++)
        {
            res=res*(r-i);
            res=res/(i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int r=0;r<numRows;r++)
        {
          vector<int>row;
          int numColms=r+1;
          int res=1;
          row.push_back(res);
          for(int c=1;c<numColms;c++)
          {
              int a=function(r,c);
              row.push_back(a);
          }
          ans.push_back(row);
        }
        return ans;
    }
};