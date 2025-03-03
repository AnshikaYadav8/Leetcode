class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());
        unordered_map<int,int> mp;

        for(int i = 0; i < sortedNums.size(); i++) {
            if(mp.find(sortedNums[i]) == mp.end()) {  
                mp[sortedNums[i]] = i;  
            }
        }

        vector<int> result;
        for(auto x: nums){
            result.push_back(mp[x]);
        }
        return result;
    }
};