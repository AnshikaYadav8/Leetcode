class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int arraySum = accumulate(nums.begin(), nums.end(),0);
        int missingNum = sum-arraySum;
        return missingNum;
    }
};