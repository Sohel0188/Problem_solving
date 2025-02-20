#include<bits/stdc++.h>
using namespace std;
void world(){
    cout<<"(3) World Function Start"<<endl;
    cout<<"(4) World Function End"<<endl;
}
void hello(){
    cout<<"(2) Hello Function Start"<<endl;
    world(); //wait for execution world function
    cout<<"(5) Hello Function End"<<endl;
}
int main(){
    cout<<"(1) Main Function Start"<<endl;
    hello(); //wait for execution hello function
    cout<<"(6) Main Function End" <<endl;
    return 0;
}

