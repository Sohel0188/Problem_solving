#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    getline(cin,s);

    // cout<<s;
    stringstream ss(s);
    string word ;
    int count=0 ;
    while (ss>>word)
    {
       cout<<word<<endl;
       count++;

    }
    
    // ss>>word;
    cout<<s<<endl;
     cout<<count<<endl;
    return 0;
}