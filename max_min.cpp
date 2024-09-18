#include<bits/stdc++.h>
using namespace std;
class Student{
 public :
    string name;
    int roll;
    int marks;
};

int main(){

    int n;
    cin>>n;
    Student ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i].name>>ar[i].roll>>ar[i].marks;
    }
    Student mn;
    mn.marks =INT_MAX;
    for(int i=0;i<n;i++){
        if(ar[i].marks < mn.marks){
            mn=ar[i];
        }
        
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;

}