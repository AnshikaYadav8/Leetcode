class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int a = 9, b=9, res= 10;
        if(n==0) return 1;
        if(n==1) return 10;
        for(int i=1; i<=n-1; i++){
            a*=b;
            res+= a;
            b--;
        }
        return res;
    }
};