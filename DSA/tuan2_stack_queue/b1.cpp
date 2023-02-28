#include<iostream>
#include<stack>

using namespace std;

class Queue{
public:
	stack<int> stack1, stack2;
	void enqueue(int &x)
	{
		while (!stack1.empty())
		{
			stack2.push(stack1.top());
			stack1.pop();
		}
		stack1.push(x);
		while (!stack2.empty())
		{
			stack1.push(stack2.top());
			stack2.pop();
		}
	}
	void dequeue()
	{
		if (stack1.empty())
			return;
		stack1.pop();
	}
};

int main()
{
	int n, x, y;
	Queue q;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> y;
		if (y == 1)
		{
			cin >> x;
			q.enqueue(x);
		}
		if (y == 2)
		{
			q.dequeue();
		}
		if (y == 3)
		{
			cout << q.stack1.top() << endl;
		}
	}
	return 0;
}
