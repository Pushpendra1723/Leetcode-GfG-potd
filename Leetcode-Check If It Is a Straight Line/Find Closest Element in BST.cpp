class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& co) {
     int n=co.size();
     set<float>s;
     set<int>si;
     for(int i=0;i<n;i++)
     {
       si.insert(co[i][0]);
     }
     if(si.size()==1)return true;
     for(int i=1;i<n;i++)
     {
         float m=(float)(co[i][1]-co[0][1])/(co[i][0]-co[0][0]);
         s.insert(m);
     }

     if(s.size()==1)return true;
     else return false;
    }
};