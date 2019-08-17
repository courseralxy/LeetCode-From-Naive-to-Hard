class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>x(m, 0);
        vector<int>y(n, 0);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++){
                x[i] = max(x[i], grid[i][j]);
                y[j] = max(y[j], grid[i][j]);
            }
        int res = 0;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                res += min(x[i], y[j]) - grid[i][j];
        
        return res;
    }
};
