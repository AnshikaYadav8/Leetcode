class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        double result = 1;
        if(N==0) return 1;
        if(N<0){
            x = 1/x;
            N = -N;
        }
        while(N>0){
         if(N%2==0){
            x = x*x;
            N = N/2;
         } else {
            result = result*x;
            N = N-1;
         }
        }
        return result;
    }
};