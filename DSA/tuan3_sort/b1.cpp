#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string s;
    int pos_end, count_word = 0;  // pos_end: vi tri cuoi cua tu
    vector<string> vec_str;
    getline(cin, s);

    vec_str.resize(50, "0");
    int len = s.length();
    for (int i = len -  1; i >= 0; i--)
    {
         
        if (s[i] >= '0' && s[i] <= '9')
            pos_end = i; 
        if ((i == 0 || s[i-1] == ' ') && ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
        {
            int idx = s[pos_end] - '0';
            vec_str[idx - 1] = s.substr(i, pos_end - i);
            count_word++;
        }   
    }
    
    for (int i = 0; i < count_word; i++)
    {
        cout << vec_str[i] << " ";
    }
    return 0;
}


//cach 2

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string stringArray[20];
//     string input;
//     char last;
//     while (cin>>input)
//     {
//         last = input[input.size()-1];
//         input.erase(input.size()-1, 1);
//         stringArray[(int)(last-'0')] = input;
//     }
//     for (int i=1;i<20;i++)
//         cout<<stringArray[i]<<" ";
// }