#include <bits/stdc++.h>

#define ll long long
#define int long long
#define For(i, a, b) for (int i = (a); i < (b); i++)
#define in(a)            \
    for (auto &it : (a)) \
        cin >> it;
#define out(b)           \
    for (auto &it : (b)) \
        cout << it << " ";
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define F first
#define S second
#define ld long double
#define pii pair<int, int>

const ll MOD = 1e9 + 7;
int n;

using namespace std;

void wise_crack()
{
    // Solution for given problem.
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n);
    char ch;
    For(i, 0, n)
    {
        For(j, 0, m)
        {
            cin >> ch;
            grid[i].push_back(ch);
        }
    }
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    function<void(int, int)> DFS = [&](int x, int y)
    {
        for (int kx = 0; kx < 4; kx++)
        {
            int nx = x + dx[kx];
            int ny = y + dy[kx];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '.')
            {
                grid[nx][ny] = '#';
                DFS(nx, ny);
            }
        }
    };
    int ans = 0;
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
            if (grid[x][y] == '.')
            {
                ans++;
                DFS(x, y);
            }
    }
    cout << ans << endl;
    return;
}
signed main()
{
    // Coder --> binary_Rahul
    // College --> NIT Raipur
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // For T number of test cases.
    int t = 1;
    // cin >> t;
    while (t--)
    {
        wise_crack();
    }
    return 0;
}