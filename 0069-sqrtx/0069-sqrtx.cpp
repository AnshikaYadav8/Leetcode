class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int left=0, right=x, ans=0;
        while(left<=right){
            long long mid = (left+right)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid < x) {
                ans = mid;
                left = mid+1;
            } else right = mid-1;
        }
        return ans;
    }
};