#include<bits/stdc++.h>
using namespace std;
int main(){
   int row,col;
   cin>>row>>col;
   int ar[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>ar[i][j];
    }
   } 
   int flag = 1;
   if(row !=col){
    flag = 0;
   }
   for(int i=0;i<row;i++){
    for(int j=0; j<col; j++){
        if(i+j == 2){
            continue;
        }
        if(ar[i][j] !=0){
            flag = 0;
        }
    }
   }
   if(flag != 0){
    cout<<"This is secondary diagonal matrix";
   }else{
    cout<<"Not a diagonal matrix";
   }
    return 0;
}

