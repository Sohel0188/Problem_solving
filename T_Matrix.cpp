#include<bits/stdc++.h>
using namespace std;
int main(){
   int row;
   cin>>row;
   int ar[row][row];
   for(int i=0;i<row;i++){
    for(int j=0;j<row;j++){
        cin>>ar[i][j];
    }
   }
   int primary = 0;
   int seconday = 0;
   for(int i=0;i<row;i++){
    for(int j=0;j<row;j++){
        if(i==j){
            primary = primary+ar[i][j];
        }
        if(i+j==row-1){
            seconday = seconday + ar[i][j];
        }
    }
   }
    int difference = (primary-seconday);
    int abs_dif = abs(difference); 
    cout<<abs_dif; 
    return 0;
}

