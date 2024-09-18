#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
int main(){
    int n;
    cin>>n;
    Student ar[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,ar[i].name);

        cin>>ar[i].roll>>ar[i].marks;
        // cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
    }
    for(int i=0;i<n;i++){
      
        cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
    }
}