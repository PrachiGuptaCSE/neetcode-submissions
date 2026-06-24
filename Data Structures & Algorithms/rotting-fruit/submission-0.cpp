class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        queue<pair<int,int>> q;
        int fresh = 0;

        for (int r = 0; r < rows; ++r)
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == 2) q.push({r, c});
                if (grid[r][c] == 1) ++fresh;
            }
        if (fresh == 0) return 0;

        int minutes = 0;
        int dirs[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};

        while (!q.empty() && fresh > 0) {
            int sz = q.size();
            ++minutes;
            while (sz--) {
                auto [r, c] = q.front(); q.pop();
                for (auto& d : dirs) {
                    int nr = r + d[0], nc = c + d[1];
                    if (nr < 0 || nr >= rows ||
                        nc < 0 || nc >= cols ||
                        grid[nr][nc] != 1) continue;
                    grid[nr][nc] = 2;
                    --fresh;
                    q.push({nr, nc});
                }
            }
        }

        return fresh == 0 ? minutes : -1;
    }
};