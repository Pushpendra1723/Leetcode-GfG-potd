class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int a=arr[1]-arr[0];
        for(int i=1;i<arr.size();i++)
        {
          int b=arr[i]-arr[i-1];
          if(a!=b)return false;
        }
        return true;
    }
};