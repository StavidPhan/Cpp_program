#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)      
        a[i] = i;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x >= n - 1)
        {
            cout << -1 << endl;
            a[x] = -1;
            continue;
        }
        a[x] = -1;
        for (int j = x + 1; j < n; j++)
            if (a[j] != -1)
            {
                cout << a[j] << endl;
                break;
            }
    }
    return 0;
}