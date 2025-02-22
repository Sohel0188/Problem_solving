#include<bits/stdc++.h>
using namespace std;
void recursive(int i){
    if (i == 21) return;
    
    if(i%2==0){
        cout<<"Event Number"<<" "<<i<<endl;
        recursive(i+1);
    }else{
        cout<<"Odd Number"<<" "<<i<<endl;
        recursive(i+1);
    }
}
int main(){
   recursive(1); 
    return 0;
}

