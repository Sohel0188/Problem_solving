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

   if(row!=col){
    flag = 0;
   }
//    cout<<"row and col "<<flag <<endl;
// for(int i=0;i<row;i++){

//     for(int j=0;j<col;j++){
//         cout<<ar[i][j]<<" ";
//     }
//     cout<<endl;
// }

   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(i==j){
            continue;
        }
            
        if(ar[i][j]!=0){
            flag = 0;
            // cout<<"i and j is not same"<<endl;
            // cout<<ar[i][j]<<" "<<endl;
            // cout<<i<<" "<<j<<endl;
        }
        
       
    }
   }
//    cout<<flag;
   if(flag == 1){
    cout<<"Primary Diagonal Matrix";
   }else{
    cout<<"Not Diagonal Matrix";
   }
    return 0;
}

