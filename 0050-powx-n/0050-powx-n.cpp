class Solution {
public:
    double myPow(double x, int n) {
        
        if (n == 0) {
            return 1.0; 
        }
        if(n<0){
            // n=-n;
            return 1/solve(x,n);
        }

        return solve(x, n); 
    }

    double solve(double x, int n) { 
        if (n == 0) {
            return 1.0;
        }

        double half = solve(x, n / 2); 
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x; 
        }
    }
};