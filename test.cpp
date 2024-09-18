#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>> t;
        int p=0;
        while (p<t)
        {
            int n, s;

        cin >> n >> s;
        int ar[n];
        for (int i = 0; i < n ; i++)
        {
            cin >> ar[i];
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n-2; j++)
            {
                int sum = ar[i] + ar[j] + ar[j+1];
                if(sum == s){
                    flag =1;
                }
            }
           
        }
        if (flag == 1)
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