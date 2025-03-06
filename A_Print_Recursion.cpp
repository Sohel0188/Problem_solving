#include <bits/stdc++.h>
using namespace std;
void recursion(int n)
{
    if (n == 0)
        return;
    cout << "I love Recursion" << endl;
    recursion(n - 1);
}
int main()
{
    int N;
    cin >> N;
    recursion(N);
    return 0;
}
