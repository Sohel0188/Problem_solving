#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++){
    cin>>ar[i];
   }
   int max = INT_MIN;
   int min = INT_MAX;

   for(int i=0;i<n;i++){
    if(max<ar[i]){
        max = ar[i];
    }

    if(min>ar[i]){
        min = ar[i];
    }
   // cout<<ar[i]<<" ";
   }
    cout<<"Max number is :"<<max << endl;
    cout<<"Min number is :"<<min << endl;
    return 0;
}

