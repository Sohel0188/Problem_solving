#include<iostream>
#include<utility>
using namespace std;
void swap_value(int *a,int *b){
    
   swap(*a,*b);
}
int main(){
int a, b;
cin>>a>>b;
swap_value(&a,&b); 
cout<<a <<" "<<b;
}