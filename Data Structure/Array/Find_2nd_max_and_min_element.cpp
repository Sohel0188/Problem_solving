#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++){
    cin>>ar[i];
   } 
   for(int i=0;i<n-1;i++){
    for(int j=i;j<n;j++){
        if(ar[i]>ar[j]){

            swap(ar[i],ar[j]);
        }
    }
   }
   cout<<"Secend Smallest Value : "<< ar[1]<<endl;

   cout<<"Secend Largest Value : "<< ar[n-2] <<endl;

   for(int i=0;i<n;i++){
    cout<<ar[i] <<" ";
   } 
    return 0;
}

