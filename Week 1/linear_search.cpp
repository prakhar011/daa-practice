/*
Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find
whether a given key element is present in the array or not. Also, find the total number of comparisons for each input case.
(Time Complexity = O(n), where n is the size of input).

For this problem you are free to choose programming language, no. of test cases, input and output format.

If you feel ambitious about problem solving, keep the input inside a text file,
read that using a program to generate the output in another file.
*/

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
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==to_find){
            cout << to_find << " found and no of comparisons were " << i << ln;
            return;
        }
        if (i == n - 1)
        {
            cout << "Not found" << ""<<ln;
        }
    }
    
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