#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;

};
bool cmp(Student a ,Student b){
    if(a.marks==b.marks){
        return a.roll<b.roll;
    }
    else{
        return a.marks>b.marks;
    }
    // if(a.marks<b.marks){
    //     return true;
    // }
    // else if(a.marks>b.marks){
    //     return false;
    // } 
    // else{
    //     if(a.roll<b.roll){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
}
int main(){
    int n;
    cin>>n;
    Student ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i].name>>ar[i].roll>>ar[i].marks;
    }
    sort (ar,ar+n,cmp);
    for(int i=0;i<n;i++){
        cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
    }
}