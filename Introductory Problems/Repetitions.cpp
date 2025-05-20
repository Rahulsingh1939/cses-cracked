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
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    int l = 0, r = 1;
    int ans = 1;
    while (r < n)
    {
        if (s[l] == s[r])
            ans = max(ans, r - l + 1);
        else
            l = r;
        r++;
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
    // cin>>t;
    while (t--)
    {
        wise_crack();
    }
    return 0;
}