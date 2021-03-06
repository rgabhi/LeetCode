class Solution {
public:
    // Time: O(log(mn))
    // Space: O(1)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;
        
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m * n - 1;
        while (l < r) {
            int mid = l + (long long)r + 1 >> 1;
            if (matrix[mid / n][mid % n] <= target)
                l = mid;
            else
                r = mid - 1;
        }
        return matrix[l / n][l % n] == target ? true : false;
    }
};
