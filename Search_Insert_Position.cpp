#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++){
    cin>>ar[i];
   } 
   int tirget ;
   cin>>tirget;
   int left = 0;
   int right = n+1;
   while (left<=right){
    int mid = (left + right)/2;
    if(ar[mid] == tirget){
        cout<<(mid);
        break;
    }
    if(ar[mid]>tirget){
        right = mid-1;
        
    }else{
        left = mid + 1;
      
    }
    
   }
   cout<<left;
   
   
    return 0;
}

