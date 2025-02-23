#include<bits/stdc++.h>
using namespace std;
 double power(double x,int n){
    if(n==0) return 1;
     double value  = x*power(x, n-1);
    return value;
}

int main(){
    double x;
    int n;
    cin>>x>>n;
     double ans =  power(x,n);
    cout<<ans;
    return 0;
}

