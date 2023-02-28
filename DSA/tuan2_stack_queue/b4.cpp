#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    stack<int> B;
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if ((s[0] >= '0' && s[0] <= '9') || s[0] == '-')
        {   
            int x = 0;
            if (s[0] == '-')
            {
                for (int i = 1; i < s.length(); i++)
                {
                    x = x*10 + s[i] - '0';
                }
                x = -x;
            }
            else for (int i = 0; i < s.length(); i++)
                {
                    x = x*10 + s[i] - '0';
                }
            B.push(x);
            sum += x;
        }
        if (s[0] == 'C' && !B.empty())
        {
            sum -= B.top();
            B.pop();
        }
        if (s[0] == 'D')
        {
            B.push(2*B.top());
            sum += B.top();
        }
        if (s[0] == '+')
        {
            if (B.size() < 2) 
            {
                continue;
            }
            int x = B.top();
            B.pop();
            int y = B.top();
            B.top();
            B.push(y);
            B.push(x);
            B.push(x + y);
            sum += B.top();
        }
    }
    cout << sum;
    return 0;
}

