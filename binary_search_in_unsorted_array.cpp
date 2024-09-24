// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++){
       cin>>ar[i];
   }
   sort(ar,ar+n);
    int x;
    cin>>x;
    int left = 0;
    int right = n-1;
    bool flag = false;
    while(left<=right){
        int mid = (left+right)/2;
        if(ar[mid]==x){
            flag=true;
            break;
        }
        if(ar[mid]>x){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    if (flag){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    return 0;
}