#include<bits/stdc++.h>

using namespace std;

int id[1005], size[1005];

int find(int u) 
{
    if (u == id[u]) return u;
    return id[u] = find(id[u]);
}

void unionn(int u, int v) 
{
    int root_u = find(u);
    int root_v = find(v);
    if (root_u == root_v) return;

    if (size[root_u] < size[root_v]) 
        swap(root_u, root_v);
    id[root_v] = root_u;
    size[root_u] += size[root_v];
}

int main() 
{
    int n, m, a;
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
    {
        id[i] = i;
        size[i] = 1;
    }

    for (int i = 0; i < m; i++) 
    {
        int u, v;
        cin >> u >> v;
        unionn(u, v);
    }

    cin >> a;

    int root_a = find(a);

    // Kiếm tra xem đỉnh a có trong đồ thị không
    if (a >= n || id[root_a] != root_a) 
    {
        cout << "-1";
        return 0;
    }

    int maxx = -1;
    // Duyệt qua tất cả các đỉnh, tìm gốc của cây chứa đỉnh đó và cập nhật đỉnh lớn nhất
    for (int i = 0; i < n; i++) {
        if (find(i) == root_a) 
        {
            maxx = max(maxx, i);
        }
    }
    cout << maxx;
    return 0;
}
