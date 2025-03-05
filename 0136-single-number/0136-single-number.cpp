/*class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        for(auto x: mp){
            if(x.second == 1){
                return x.first;
            }
        }
        return -1;
    }
};*/

class Solution{
    public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(auto x: nums){
            result ^= x;
        }
         return result;
    }
};