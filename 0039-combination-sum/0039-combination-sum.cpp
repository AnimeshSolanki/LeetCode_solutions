class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result) {
        if(target <0)
            return;

        if (target == 0){
            result.push_back(current);
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            current.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i, current, result);
            current.pop_back();
        }
    }   

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> r;
        vector<int> current;

        backtrack(candidates, target, 0 , current, r);

        return r;
    }
};