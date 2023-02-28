//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

vector<int> id, size;

void Init (int n)
{
	id.resize(n); size.resize(n);
	for (int i=0; i<n; i++)
	{
		id[i] = i;
		size[i] = 1;
	}
}
// tim goc cay: root(x) = Find(x)
int Find(int x)
{
	if (x == id[x])
	        return x;
	return Find(id[x]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (x != y)
	{
		if (size[x] < size[y]) 
			swap (x,y);
		size[x] += size[y];
		id[y] = x;
	}
}

int main()
{
    int n, m, x, y;
    cin >> n >> m;
    int count = n;
    Init(n);
    for (int i=0; i<m; i++)
    {
        cin>> x >> y;
        if (Find(x) != Find(y))
        {
        	count--;
		}
        Union(x,y);    
    }
	
	cout<< count;
    return 0;
}
