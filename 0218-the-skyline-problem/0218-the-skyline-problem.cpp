class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int, int>> events;
        vector<vector<int>> result;
        multiset<int> heights = {0};  
        
        for (auto x : buildings) {
            events.push_back({x[0], -x[2]});
            events.push_back({x[1], x[2]});
        }
        
        sort(events.begin(), events.end());

        int prevMax = 0;

        for (auto [x, h] : events) {
            if (h < 0) {
                heights.insert(-h);
            } else {
                heights.erase(heights.find(h));
            }

            int currMax = *heights.rbegin();

            if (currMax != prevMax) {
                result.push_back({x, currMax});
                prevMax = currMax;
            }
        }
        return result;
    }
};
