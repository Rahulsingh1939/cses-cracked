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
    int n;
    cin >> n;
    For(k, 1, n + 1)
    {
        // Total number of ways two knights can be placed on
        long totalWays = ((long)k * k * (k * k - 1)) / 2;
        // Number of ways two knights can attack each other
        long attackingWays = 4 * (k - 1) * (k - 2);
        // Number of ways two knights can be placed without attacking each other
        long ans = totalWays - attackingWays;
        cout << ans << endl;
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
    // cin>>t;
    while (t--)
    {
        wise_crack();
    }
    return 0;
}