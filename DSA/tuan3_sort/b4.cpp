#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n);

    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            ans++;
    cout << ans;
    return 0;
}