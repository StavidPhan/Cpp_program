#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> stack;
    string s;
    getline(cin, s);
    int depth = 0;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == '(')
        {
            stack.push(s[i]);
        }
        else if (s[i] == ')')
            if (!stack.empty())
            {
                stack.pop();
                depth++;
            }
    }
    cout << depth;
    return 0;
}



// #include <iostream>
// #include <string>

// using namespace std;

// int main() 
// {
//     string s;
//     getline(cin, s);

//     int depth = 0;
//     int max_depth = 0;

//     for (int i = 0; i < s.length(); i++) 
//     {
//         if (s[i] == '(') {
//             depth += 1;
//             max_depth = max(depth, max_depth);
//         }
//         else if (s[i] == ')') {
//             depth -= 1;
//         } 
//     }

//     cout << max_depth << endl;

//     return 0;
// }