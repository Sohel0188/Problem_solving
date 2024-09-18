#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int p = 0;

    while (p < t)
    {
        int n, s;

        cin >> n >> s;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int flug = 0;
        for (int i = 0; i < n-2; i++)
        {
            for (int j = i + 1; j <= n-2; j++)
            {
                for (int k = j + 1; k < n; k++)
                {

                    if (ar[i] + ar[j] + ar[k] == s)
                    {
                        flug = 1;
                    }
                }
                
            }
           
        }
        if (flug == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        t--;
    }

    return 0;
}