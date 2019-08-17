class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        
        x = [0] * m;
        y = [0] * n;
        
        for i in range(0, m):
            for j in range(0, n):
                x[i] = max(x[i], grid[i][j])
                y[j] = max(y[j], grid[i][j])
        res = 0;
        
        for i in range(0, m):
            for j in range(0, n):
                res += min(x[i], y[j]) - grid[i][j]
        return res
