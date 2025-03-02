#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ar[i][j];
        }
    }
    int row_size = 0;
    for (int i = 0; i < row; i++)
    {
        row_size ++;
    }
    // cout<<row_size;
    cout<<"Enter Row Number"<<endl;
    int enter_row;
    cin >> enter_row;
    if (enter_row > row_size)
    {
        cout << "This Row Number is not Present in this Matrix";
    }
    else
    {
        for (int j = 0; j < col; j++)
        {
            cout << ar[enter_row][j]<<" ";
        }
    }

    return 0;
}
