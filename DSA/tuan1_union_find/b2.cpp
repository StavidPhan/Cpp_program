//                                        C�CH 1

//#include<bits/stdc++.h>
//
//using namespace std;
//
//vector <pair<int,int>> edges;
// 
//void enter(int &n, int &m)
//{
//	cin >> n >> m;
//	edges.resize(m);
//	for (int i=0; i<m; i++)
//	{
//		cin >> edges[i].first >> edges[i].second;
//	}
//}
//
//// tim goc cua cay chua dinh u
//int find_root(int u, vector<int> &size)
//{
//	return (size[u] > 0 ? u : size[u] = find_root(size[u], size));
//}
//
//// hop nhat 2 cay con co goc r1 va r2
//void union_trees(int r1, int r2, vector<int> &size)
//{
//	if (size[r1] < size[r2])
//	{
//		swap(r1,r2);
//	}
//	size[r1] += size[r2];
//	size[r2] = r1;
//}
//
//// xac dinh xem do thi co chu trinh khong
//void detect_cycle(int &n, int &m)
//{
//	vector<int> size(n+1, 1);
//	
//	for (int i=0; i<m; i++)
//	{
//		int u = edges[i].first, v = edges[i].second;
//		int r1 = find_root(u, size), r2 = find_root(v, size);
//		if (r1 == r2)
//		{
//			cout << "YES";
//			return;
//		}
//		union_trees(r1, r2, size);
//	}
//	cout << "NO";
//}
//
//int main ()
//{
//	int n, m;
//	enter(n, m);
//	detect_cycle(n, m);
//	return 0;
//}


///                                   C�CH 2
#include <bits/stdc++.h>

using namespace std;

int id[1005];
bool flag;

int find(int x)
{
    if (id[x]==x) return x;
    else return id[x]=find(id[x]);
}

void unionn(int x,int y)
{
    int rx = find(x);
    int ry = find(y);
    if (rx == ry)
	{
        flag = true;
        return;
    }
    id[rx] = ry;
}

int main()
{
	int n, m, x, y;
    cin >> n >> m;
    for (int i=0; i<n; i++) 
		id[i] = i;
    for (int i=0; i<m; i++)
	{
        cin >> x >> y;
        unionn(x,y);
    }
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}

