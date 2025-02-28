class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char, int> freq;
        for(auto x:s){
            freq[x]++;
        }
        vector<pair<int, char>> count;
        for(auto x : freq){
            count.push_back({x.second, x.first});
        }
        sort(count.rbegin(), count.rend());
        for(auto x : count){
            int i = x.first;
            while(i--){
            ans += x.second;
            }
        }
        return ans;
        }
};