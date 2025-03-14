#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if (n == 0) return;
    int value = n % 10;
    fun(n / 10);
    cout << value << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        fun(n);
        if(n==0)
        {
            cout <<"0";
        }
        cout << endl;
       
    }
    return 0;
}
