#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    // string value = 'Jassica';
    int count=0;
    while (ss>>word)
    {
        if( word == "Jessica"){

            count++;

        }
    }
    if(count>0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
  

} 