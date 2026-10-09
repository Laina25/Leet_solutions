class Solution {
public:
    int fib(int n) {
     if (n <= 1) return n;
        int a1 = 0, a2 = 1, temp;
        for (int i = 2; i <= n; i++) {
            temp = a2;
            a2 = a1 + a2;
            a1 = temp;
        }
        return a2;     
    }
};