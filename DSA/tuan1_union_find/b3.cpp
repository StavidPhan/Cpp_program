#include <bits/stdc++.h>

using namespace std;

int id[1005];
bool flag;

int find(int x)
{
    if (id[x] == x) return x;
    else return id[x]=find(id[x]);
}

void unionn(int x, int y, int &count2)
{
    int rx = find(x);
    int ry = find(y);
    if (rx == ry)
	{
        count2--;
        return;
    }
    id[rx] = ry;
}

int main()
{
	int n, m, x, y;
    cin >> n >> m;
    if (m > n)
    {
        cout << n;
        return 0;
    }
    if (m + 1 < n)
    {
        cout << "UNABLE TO FORM FRIEND GROUP";
        return 0;
    }
    int count1 = n, count2 = m;   // count1: so thanh phan lien thong;     count2: so quan he it nhat can co
    for (int i=0; i<n; i++) 
		id[i] = i;
    for (int i=0; i<m; i++)
	{
        cin >> x >> y;
        if (find(x) != find(y))
        {
        	count1--;
		}
        unionn(x, y, count2);
    }
    if (count2 <= m || count1 <= 1) cout << count2;
    
    else if (count1 != 1) cout << "UNABLE TO FORM FRIEND GROUP";
    return 0;
}
