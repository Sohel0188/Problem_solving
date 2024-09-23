// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    int x;
    cin>>x;
    bool flag = false;
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(ar[mid]==x){
            flag = true;
            break;
        }
        if(x>ar[mid]){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    if (flag == true){
        cout<<"yes";
    }else{
        cout<<"Sorry this number is not present";
    }

    return 0;
}