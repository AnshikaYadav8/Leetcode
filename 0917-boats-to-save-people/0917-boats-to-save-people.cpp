class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        vector<int> sortedPeople = people;
        sort(sortedPeople.begin(), sortedPeople.end());
        int left=0, right=sortedPeople.size()-1;
        int boats=0;
        while(left<=right){
            if(sortedPeople[left]+sortedPeople[right]<=limit){
                left++ ;
            }
            right-- ;
            boats++ ;
        }
        return boats;
    }
};