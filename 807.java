class Solution {
    public int maxIncreaseKeepingSkyline(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        
        int[] x = new int[m];
        int[] y = new int[n];
        
        for(int i = 0; i < m;i++)
            for(int j = 0; j < n; j++){
                x[i] = Math.max(x[i], grid[i][j]);
                y[j] = Math.max(y[j], grid[i][j]);
            }
        
        int res = 0;
        
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                res += Math.min(x[i], y[j]) - grid[i][j];
        return res;
    }
}
