#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <iostream>
using namespace std;
#define ln '\n';
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int to_find = 0;
    cin >> to_find;
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i <= j)
    {
        count++;
        int m = i + (j - i) / 2;
        if (arr[m] == to_find)
        {
            cout << "Found " << count << ln;
            return;
        }
        if (arr[m] < to_find)
            i = m + 1;
        else
            j = m - 1;
    }
    cout << "Not Present " << count << ln;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("binary_search_input.txt", "r", stdin);
    freopen("binary_search_output.txt", "w", stdout);
#endif
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}