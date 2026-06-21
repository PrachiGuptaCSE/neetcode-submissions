class Solution {
public:
    int x[4] = {-1, 1, 0, 0};
    int y[4] = {0, 0, -1, 1};

    bool valid(int i, int j, int n, int m) {   // order now matches call site
        if (i < 0 || j < 0 || i >= n || j >= m) {
            return false;
        }
        return true;
    }

    void dfs(vector<vector<char>> &a, int n, int m, int i, int j, vector<vector<bool>> &vis) {
        vis[i][j] = true;
        for (int k = 0; k < 4; k++) {
            int row = i + x[k];
            int col = j + y[k];
            if (valid(row, col, n, m) && a[row][col] == '1' && vis[row][col] == false) {
                dfs(a, n, m, row, col, vis);
            }
        }
    }

    int numIslands(vector<vector<char>>& a) {
        if (a.empty() || a[0].empty()) return 0;
        int n = a.size();
        int m = a[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '1' && !vis[i][j]) {
                    dfs(a, n, m, i, j, vis);
                    count++;
                }
            }
        }
        return count;
    }
};