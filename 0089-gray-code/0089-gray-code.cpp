class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        int total = pow(2,n);
        for(int i=0; i<total; i++){
           result.push_back(i ^ (i / 2));
        }
        return result;
    }
};