#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string A;
    getline(cin, A);
    sort(A.begin(), A.end());
    cout << ((A[0] - '0')*10 + (A[3] - '0') + ((A[1] - '0')*10 + (A[2] - '0')));
    return 0;
}