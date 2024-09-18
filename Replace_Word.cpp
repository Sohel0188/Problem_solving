#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    // int count = 0;
    while (t>0)
    {
            string s,x;

    cin>>s>>x;

    while (s.find(x)!=-1)
    {
        int position= s.find(x);
        int size = x.size();
        s.replace(position,size,"#");
    }
    cout<<s<<endl;
        t--;
    }
    
    
}