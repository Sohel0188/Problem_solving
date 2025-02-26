#include<bits/stdc++.h>
using namespace std;
int main(){
   int row, columb ;
   cin>>row>>columb;
   int ar[row][columb];
   for(int i=0;i<row;i++){
    for(int j=0;j<columb;j++){
        //cout<<"ar["<<i <<"]"<<"["<<j<<"] ";
        cin>>ar[i][j];
    }
   }
   for(int i=0;i<row;i++){
    for(int j=0;j<columb;j++){
        //cout<<"ar["<<i <<"]"<<"["<<j<<"] ";
        cout<<ar[i]<<" "<<[j];
    }
    cout<<endl;
   }
    return 0;
}

