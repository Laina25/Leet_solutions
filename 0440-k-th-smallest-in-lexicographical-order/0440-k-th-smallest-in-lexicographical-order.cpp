class Solution {
public:
    int findKthNumber(int n, int k) {
         long long curr = 1;
        k--;

        while (k > 0) {
            long long steps = countSteps(curr, n);

            if (steps <= k) {
                k -= steps;
                curr++;
            } else {
                curr *= 10;
                k--;
            }
        }
   return curr;
    }

    long long countSteps(long long prefix, int n) {
        long long steps = 0;
        long long first = prefix;
        long long last = prefix;

        while (first <= n) {
            steps += min((long long)n + 1, last + 1) - first;
            first *= 10;
            last = last * 10 + 9;
        }

        return steps;
    }
};