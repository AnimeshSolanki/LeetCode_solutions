class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int l = 0, r = n-1;

        while(l<=r){
            int mid = l + (r-l)/2;

            int maxRow = 0;
            for (int i = 0; i<m; i++){
                if (mat[i][mid] > mat[maxRow][mid]){
                    maxRow = i;
                }
            }
            bool isPeak = true;
            if (mid > 0 && mat[maxRow][mid - 1] > mat[maxRow][mid]) {
                isPeak = false;
                r = mid - 1; 
            } else if (mid < n - 1 && mat[maxRow][mid + 1] > mat[maxRow][mid]) {
                isPeak = false;
                l = mid + 1; 
            }

            if (isPeak) {
                return {maxRow, mid};
            }
        }
        return {-1, -1}; 
    }
};