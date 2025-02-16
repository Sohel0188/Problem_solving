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
    int target;
    cin >> target;
    int left = 0;
    int right = n - 1;
    int ar2[2];

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (ar[mid] == target)
        {
            if (ar[mid - 1] == target)
            {
                cout << mid << " " << mid - 1 << endl;
                ar2[1] = mid;
                ar2[0] = mid - 1;
                break;
            }
            if (ar[mid + 1] == target)
            {
                cout << mid << " " << mid + 1 << endl;
                ar2[1] = mid;
                ar2[0] = mid + 1;
                break;
            }
        }
        if (ar[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    for (int i = 0; i < 2; i++)
    {

        cout << ar2[i] << " ";
    }
    return 0;
}
