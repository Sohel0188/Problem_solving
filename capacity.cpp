#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity() <<endl;
    string a=" Hello bangladesh .This is sohel , I am a new programmer";
    cout<<a.capacity()<<endl;
    string c="HEllo";
    c.clear();
    cout<<c<<endl;
    cout<<c.size()<<endl;
    string t=";hf";
    if(t.empty()==true){
        cout<<"empty\n";
    }else{
        cout<<"Not empty\n";
    }
    string re = "hello_world";
    cout<<re.size()<<endl;
    // re.resize(8);
    cout<<re<<endl;
    re.resize(17,'j');
    cout<<re<<endl;

}