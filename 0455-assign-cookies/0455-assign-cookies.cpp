class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i=0 , j=0;
        //int n= g.size()-1;
        //int m = s.size()-1;
        while(i < g.size() && j< s.size()){
            if(g[i] <= s[j]){
                i++;
                j++;
            } else j++;
        }
        return i;
    }
};