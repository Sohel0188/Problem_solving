#include <bits/stdc++.h>
using namespace std;

class student {
public:
    int id;
    char name[101];
    char section;
    int marks;
};
int main() {
    int t;
    cin>>t;
    int p=0;
    while(p<t){
        student a, b, c;
        cin >> a.id>> a.name>> a.section>> a.marks;
        cin>> b.id>> b.name>> b.section>> b.marks;
        cin>> c.id>> c.name>> c.section>> c.marks;
        int maxMarks = max(a.marks, max(b.marks, c.marks));

        if (a.marks == maxMarks) {
            if (b.marks == maxMarks) {
                if (a.id < b.id) {
                    cout<< a.id << " "<< a.name << " "<< a.section << " " << a.marks << endl;
                } else {
                    cout<< b.id << " "<< b.name << " " << b.section << " " << b.marks << endl;
                }
            } else if (c.marks == maxMarks) {
                if (a.id < c.id) {
                    cout<< a.id << " "<< a.name << " " << a.section << " " << a.marks << endl;
                } else {
                    cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
                }
            } else {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
            }
        } else if (b.marks == maxMarks) {
            if (c.marks == maxMarks) {
                if (b.id < c.id) {
                    cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
                } else {
                    cout<< c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
                }
            } else {
                cout<< b.id<< " " << b.name << " " << b.section << " " << b.marks << endl;
            }
        } else {
            cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
        }
        t--;
    }
    


}