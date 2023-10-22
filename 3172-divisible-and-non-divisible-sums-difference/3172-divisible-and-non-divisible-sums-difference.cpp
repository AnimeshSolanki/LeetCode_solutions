class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0;
        int num2 = 0;

        // Loop through the range [1, n].
        for (int i = 1; i <= n; i++) {
            if (i % m != 0) {
                num1 += i;  // Add to num1 if not divisible by m.
            } else {
                num2 += i;  // Add to num2 if divisible by m.
            }
        }

        return num1 - num2;
    }
};