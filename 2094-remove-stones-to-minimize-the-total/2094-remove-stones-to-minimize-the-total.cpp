class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int sum =0;
        int max=0;
        priority_queue<int> pq;
        for( auto x : piles){
            pq.push(x);
        }
        for(int i=0; i<k ; i++){
            max = pq.top();
            pq.pop();
            max = max-floor(max/2);
            pq.push(max);
        }
        while(! pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};