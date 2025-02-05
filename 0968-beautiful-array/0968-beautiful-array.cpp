class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> result = {1};
        while (result.size() < n) {
            vector<int> next;
            for (int num : result) {
                if (num * 2 - 1 <= n) {
                    next.push_back(num * 2 - 1);
                }
            }
            for (int num : result) {
                if (num * 2 <= n) {
                    next.push_back(num * 2);
                }
            }
            result = next;
        } 
        return result;
    }
};
