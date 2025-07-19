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
struct Edge
{
    int u, v, w;
};
void wise_crack()
{
    // Solution for given problem.
    int n, m;
    cin >> n >> m;
    vector<Edge> edges;
    For(i, 0, m)
    {
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--;
        edges.push_back({u, v, w});
    }
    vi dist(n, LLONG_MIN);
    dist[0] = 0;
    For(i, 0, n - 1)
    {
        for (auto &e : edges)
        {
            if (dist[e.u] != LLONG_MIN && dist[e.v] < dist[e.u] + e.w)
            {
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }
    // Detect positive cycle affecting path to n
    vector<bool> affected(n, false);
    For(i, 0, n)
    {
        for (auto &e : edges)
        {
            if (dist[e.u] != LLONG_MIN && dist[e.v] < dist[e.u] + e.w)
            {
                dist[e.v] = dist[e.u] + e.w;
                affected[e.v] = true;
                affected[e.u] = true;
            }
            if (affected[e.u])
                affected[e.v] = true;
        }
    }
    if (affected[n - 1])
    {
        cout << "-1\n";
    }
    else
    {
        cout << dist[n - 1] << "\n";
    }
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