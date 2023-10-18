class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for  (int i = 1; i<=n; i++){
            if (n% i == 0){
                s += nums[i-1] * nums[i-1];
            }
        }
        return s;
    }
};