#include<bits/stdc++.h>
using namespace std;
int  *fun(){
    int *a = new int;
    cout<<"fun function : "<<a<<endl;
    *a=100;
    
    return a;


}
int main (){

    // int *a = new int;
    // *a=100;
    // cout<<a <<endl;
    // cout<<*a<<endl;
    // float *f = new float;
    // *f=200;
    // cout<<f <<endl;
    // cout<<*f<<endl;
    int *p = fun();
    cout<<p<<endl;
    cout<<*p;
    
    return 0;
}