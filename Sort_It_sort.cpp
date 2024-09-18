#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // int s = sizeof(ar[n]);
    // cout<<s<<endl;

    sort(ar, ar+n);

    for (int i = 0; i <n; i++)
    {
        cout << ar[i]<<" ";
    }
    cout<<endl;
    for (int i = n-1; i >=0; i--)
    {
        cout << ar[i]<<" ";
    }


    return 0;
}