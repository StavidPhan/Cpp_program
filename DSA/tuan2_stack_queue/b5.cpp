#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n;
    unsigned long count = 0;
    queue<int> students, sets;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a != 0 && a != 1)
        {
            cout << "Nhap sai du lieu";
            return 0;
        }
        students.push(a);
    } 
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (b != 0 && b != 1)
        {
            cout << "Nhap sai du lieu";
            return 0;
        }
        sets.push(b);
    } 

    while (!students.empty() && !sets.empty())
    {
        if (students.front() == sets.front())
        {
            students.pop();
            sets.pop();
            count = 0;
        }
        else
        {
            students.push(students.front());
            students.pop();
            count++;
            if (count > sets.size())
            {
                cout << sets.size();
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}