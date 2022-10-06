class Solution {
public:
    int climbStairs(int n) {
        int res[2] = {1, 1};
        if (n < 2)
            return res[n];
        
        int first=1, second=1, ret;
        for (int i = 2; i <= n; i++ ) {
            ret = first + second;
            second = first;
            first = ret;
        }
        return ret;
    }
};
