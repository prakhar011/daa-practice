#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <math.h>
using namespace std;
#define ln '\n';
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int jumpSearch(int array[], int size, int key)
{
    int start = 0;
    int end = sqrt(size);

    while (array[end] <= key && end < size)
    {
        start = end;
        end += sqrt(size);
        if (end > size - 1)
            end = size;
    }

    for (int i = start; i < end; i++)
    {
        if (array[i] == key)
            return i;
        return -1;
    }
}
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
        
    }
    int main()
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("linear_search.txt", "w", stdout);
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