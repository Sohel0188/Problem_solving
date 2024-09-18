#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
    double math_marks;
    double eng_marks;
};
bool cmp(Student a, Student b)
{
    if (a.eng_marks + a.math_marks == b.eng_marks + b.math_marks)
    {

        return a.id < b.id;
    }
    else
        return a.eng_marks + a.math_marks > b.eng_marks + b.math_marks;
}
int main()
{
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++)
    {

        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }
    sort(students, students + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }
    return 0;
}