#include<bits/stdc++.h>
using namespace std;
void fibo(int i){
    if(i==0) return;
    fibo(i-1);
    cout<<i;
}
int main(){
   fibo(5); 
    return 0;
}

