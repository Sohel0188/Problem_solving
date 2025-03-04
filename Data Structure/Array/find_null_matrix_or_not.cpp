
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    int size_of_matrix = row*col;
    int ar[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>ar[i][j];
        }
    }
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(ar[i][j]==0){
                count++;
            }
        }
    }

    if(count==size_of_matrix){
        cout<<"This is null matrix"<<endl;
    }else{
        cout<<"This is not a null matrix"<<endl;
    }
    return 0;
}

