#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *ar = new int[3];
    int *br = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> ar[i];
        br[i]=ar[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << ar[i]<<" ";
    }
    cout<<endl;
    delete[] ar;

    ar = new int[5];

    for (int i = 0; i < 3; i++)
    {
        ar[i]=br[i];
       
    }
    ar[3]=40;
    ar[4]=50;
    delete[] br;
    for (int i = 0; i < 5; i++)
    {
        cout<< ar[i] <<" ";
    }
    return 0;
}