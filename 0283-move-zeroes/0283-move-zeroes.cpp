class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[k], nums[i]);
                k++;
            }
        }
        for (int i = 0; i<n; i++){
            cout<<nums[i]<<" ";
        }
    }
};