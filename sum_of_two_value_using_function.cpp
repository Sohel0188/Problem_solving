#include <iostream>
using namespace std;
int sumoftwoNumber(int a,int b){
    int c = a+b;
    return c;
}
int main() {
   int num1,num2;
   cin>>num1>>num2;

  int sum = sumoftwoNumber(num1,num2);
   cout<<"the sum is = "<<sum;

    return 0;
}