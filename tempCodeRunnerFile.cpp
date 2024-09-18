#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    string cls;
    string section;
    int id;
};

int main(){
    int n;
    Student ar[n];
    for(int i=0;i<n;i++){
        
        cin>>ar[i].name>>ar[i].cls>>ar[i].section>>ar[i].id;
    }
    for(int i=0;i<n;i++){
        
        cout<<ar[i].name<<ar[i].cls<<ar[i].section<<ar[i].id<<endl;
    }

    return 0;
}