#include<bits/stdc++.h>
using namespace std;
// int ans = 1; 
// void fibo(int i){
//     if(i==0) return;
//     fibo(i-1);
//     ans = ans*i;
// }

int fact(int i){
    if(i==0) return 1;
    int ans = i* fact(i-1);
    return ans;
}
int main(){
    int result = fact(5); 
   cout<<result;
    return 0;
}

