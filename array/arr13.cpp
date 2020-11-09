#include <bits/stdc++.h>

#define MAX 200005

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

void sort(int a[], int b[], int n, int m)
{
    int i = n - 1, j = 0;
    while(i>-1 && j<m && a[i]>b[j]){
        swap(a[i], b[j]);
        i--;
        j++;
    }
    sort(a, a + n);
    sort(b, b + n);
}

void merge(int a[], int b[], int n, int m)
{
    int i = n - 1, j = 0;
    while (i > -1 && j < m && a[i] > b[j])
    {
        swap(a[i], b[j]);
        i--;
        j++;
    }
    sort(a, a + n);
    sort(b, b + n);
}

// write code here
void rsolve()
{
    ll n, m, k;
    cin >> n >> m;
    int a[n], b[m];
    // vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; ++j)
    {
        cin >> b[j];
    }

    merge(a, b, n, m);

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < m; ++i)
    {
        cout << b[i] << " ";
    }
}

// function to handle test cases
void solve()
{
    int t;
    cin >> t;
    for (int casenum = 1; casenum <= t; ++casenum)
    {
        rsolve();
        cout << "\n";
    }
}

int main()
{

// I/0 REDIRECTION For local setup
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // FAST I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
