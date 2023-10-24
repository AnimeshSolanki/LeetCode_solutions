class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0; // Largest element
        int max2 = 0; // Second largest element

        for (int num : nums) {
            if (num >= max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        return (max1 - 1) * (max2 - 1);
    }
};