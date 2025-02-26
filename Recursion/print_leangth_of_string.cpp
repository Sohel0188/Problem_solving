#include<bits/stdc++.h>
using namespace std;
int fun(string st,int i){
    if(i>=st.size()) return 0;
    int l = fun(st,i+1);
    return l+1;
}
int main(){
   string st ="Hello";
   cout<<st.size() <<endl;
   int length = fun(st,0);  
   cout<<length<<endl; 
    return 0;
}

