/**
*解题思路：
*1.深度优先遍历：对于二维网格中的值为1的元素进行深度优先搜索，并将搜索到的1改为0，岛屿数量即为深度优先搜索的次数
*              时间O(m*n)，空间O(m*n)
*2.广度优先遍历：对于二维网格中的值为1的元素进行广度优先搜索，将其加入队列，搜索到的1改为0。直到队列为空，搜索结   *                束。最终岛屿的数量就是我们进行广度优先搜索的次数。
*              时间O(m*n)，空间O(min(m,n))
*3.并查集：没搞明白呢？
*/
class Solution {
private:
    void dfs(vector<vector<char>>& grid, int r, int c) {
        int nr = grid.size();
        int nc = grid[0].size();

        grid[r][c] = '0';
        if (r - 1 >= 0 && grid[r-1][c] == '1') dfs(grid, r - 1, c);
        if (r + 1 < nr && grid[r+1][c] == '1') dfs(grid, r + 1, c);
        if (c - 1 >= 0 && grid[r][c-1] == '1') dfs(grid, r, c - 1);
        if (c + 1 < nc && grid[r][c+1] == '1') dfs(grid, r, c + 1);
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int nr = grid.size();
        if (!nr) return 0;
        int nc = grid[0].size();

        int num_islands = 0;
        for (int r = 0; r < nr; ++r) {
            for (int c = 0; c < nc; ++c) {
                if (grid[r][c] == '1') {
                    ++num_islands;
                    dfs(grid, r, c);
                }
            }
        }

        return num_islands;
    }
};