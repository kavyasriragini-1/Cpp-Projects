#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>=90)
        cout<<"Grade: 'O'\n";
    else if(marks>=80)
        cout<<"Grade: 'A+'\n";
    else if(marks>=70)
        cout<<"Grade: 'A'\n";
    else if(marks>=60)
        cout<<"Grade: 'B+'\n";
    else if(marks>=50)
        cout<<"Grade: 'B'\n";
    else
        cout<<"FAIL\n";
}