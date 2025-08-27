class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Work with long long to avoid overflow
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long start = 0, end = a, ans = 0;

        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (mid * b == a) {
                ans = mid;
                break;
            } else if (mid * b < a) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // Determine sign of result
        if ((dividend < 0) ^ (divisor < 0))
            return -ans;
        return ans;
    }
};