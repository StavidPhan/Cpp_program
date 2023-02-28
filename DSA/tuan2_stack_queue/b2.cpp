#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int n, x, y;
	queue<int> q;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> y;
		if (y == 1)
		{
			cin >> x;
			q.push(x);
		}
		if (y == 2)
		{
			q.pop();
		}
		if (y == 3)
		{
			if (q.empty())
				cout << -1 << endl;
			else cout << q.back() << endl;
		}
	}
	return 0;
}
