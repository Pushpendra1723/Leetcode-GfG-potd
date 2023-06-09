class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        char a=letters[0];
        letters.push_back(target);
        sort(letters.begin(),letters.end());
        int l=upper_bound(letters.begin(),letters.end(),target)-letters.begin();
        if(l==n+1)return a;
        else return letters[l];
    }
};