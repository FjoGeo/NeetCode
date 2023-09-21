#include <vector>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cols = grid.size();
        int rows = grid[0].size();

        int result = 0;

        for (int i = 0; i < cols; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                if (grid[i][j] == '1')
                {
                    dfs(grid, i, j , cols, rows);
                    result++;
                }
            }
        }return result;
    }
private:
    void dfs(vector<vector<char>>& grid, int i, int j, int cols, int rows)
    {
        if ( i < 0 || i >= cols || j < 0 || j >= rows || grid[i][j] == '0')
        {
            return;
        }
        grid[i][j] = '0';

        dfs(grid, i - 1, j , cols, rows);
        dfs(grid, i + 1, j , cols, rows);
        dfs(grid, i, j - 1 , cols, rows);
        dfs(grid, i, j + 1 , cols, rows);
    }
};