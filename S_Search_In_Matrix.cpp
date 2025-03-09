#include<bits/stdc++.h>
using namespace std;
int main(){
    int row , col;
    cin>>row >>col;
    int ar[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>ar[i][j];
        }
    }
    int n;
    cin>>n;
    int flag = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(ar[i][j]==n){
                flag = 1;
            }
        }
    }
    if(flag==1){
        cout<<"will not take number";
    }else{
        cout<<"will take number";
    }
    return 0;
}

