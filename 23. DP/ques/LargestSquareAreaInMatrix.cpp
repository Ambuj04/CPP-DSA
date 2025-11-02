// User function Template for C++

class Solution
{
public:
    int solve(vector<vector<int>> &mat, int i, int j, int &maxi)
    {
        // bc
        if (i >= mat.size() || j >= mat[0].size())
        {
            return 0;
        }

        int right = solve(mat, i, j + 1, maxi);
        int diagonal = solve(mat, i + 1, j + 1, maxi);
        int dowm = solve(mat, i + 1, j, maxi);
        if (mat[i][j] == 1)
        {
            int ans = 1 + min(right, min(diagonal, dowm));
            maxi = max(maxi, ans);
            return ans;
        }
        else
        {
            return 0;
        }
    }

    int solve1(vector<vector<int>> &mat, int i, int j, int &maxi, vector<vector<int>> &dp)
    {
        // bc
        if (i >= mat.size() || j >= mat[0].size())
        {
            return 0;
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        int right = solve1(mat, i, j + 1, maxi, dp);
        int diagonal = solve1(mat, i + 1, j + 1, maxi, dp);
        int dowm = solve1(mat, i + 1, j, maxi, dp);
        if (mat[i][j] == 1)
        {
            dp[i][j] = 1 + min(right, min(diagonal, dowm));
            maxi = max(maxi, dp[i][j]);
            return dp[i][j];
        }
        else
        {
            return 0;
        }
    }
    int solve2(vector<vector<int>> &mat, int &maxi)
    {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {

                int right = dp[i][j + 1];
                int diagonal = dp[i + 1][j + 1];
                int dowm = dp[i + 1][j];
                if (mat[i][j] == 1)
                {
                    dp[i][j] = 1 + min(right, min(diagonal, dowm));
                    maxi = max(maxi, dp[i][j]);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        return dp[0][0];
    }

    int solve3(vector<vector<int>> &mat, int &maxi)
    {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> next(m + 1);
        vector<int> curr(m + 1);

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {

                int right = curr[j + 1];
                int diagonal = next[j + 1];
                int dowm = next[j];
                if (mat[i][j] == 1)
                {
                    curr[j] = 1 + min(right, min(diagonal, dowm));
                    maxi = max(maxi, curr[j]);
                }
                else
                {
                    curr[j] = 0;
                }
            }
            next = curr;
        }
        return next[0];
    }
    int solve4(vector<vector<int>> &mat, int &maxi)
    {
        int n = mat.size();
        int m = mat[0].size();

        // Traverse from bottom-right corner
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                if (mat[i][j] == 1 && i < n - 1 && j < m - 1)
                {
                    mat[i][j] = 1 + min({mat[i][j + 1], mat[i + 1][j], mat[i + 1][j + 1]});
                }
                maxi = max(maxi, mat[i][j]);
            }
        }
        return 0;
    }
    int maxSquare(vector<vector<int>> &mat)
    {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        // int maxi = 0;
        // solve(mat,0,0,maxi);
        // return maxi;

        // vector<vector<int>>dp(n,vector<int>(m,-1));
        // int maxi = 0;
        // solve1(mat,0,0,maxi,dp);
        // return maxi;

        // int maxi = 0;
        // solve2(mat,maxi);
        // return maxi;

        // int maxi = 0;
        // solve3(mat, maxi);
        // return maxi;

        int maxi = 0;
        solve4(mat, maxi);
        return maxi;
    }
};