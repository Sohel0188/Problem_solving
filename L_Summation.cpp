#include<bits/stdc++.h>
using namespace std;
int recursion(int ar[],int size){
    // int i;
    if(size==0) return 0;
    // int result;
    // cout<<result;
    // result += ar[i];
    // i++;
    // recursion(ar,size-1);
    // return result;
    return ar[size - 1] + recursion(ar, size - 1);

}

int main(){
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++){
    cin>>ar[i];
   } 
  int total = recursion(ar,n);
  cout<<total <<endl;
    return 0;
}

