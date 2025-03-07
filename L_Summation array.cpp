#include<bits/stdc++.h>
using namespace std;
int recursion(long long ar[],int size){
    if(size==0) return 0;
    return ar[size - 1] + recursion(ar, size - 1);

}

int main(){
   int n;
   cin>>n;
   long long ar[n];
   for(long long i=0;i<n;i++){
    cin>>ar[i];
   } 
   
    long long total = recursion(ar,n);
    cout<<total;
    return 0;
}

