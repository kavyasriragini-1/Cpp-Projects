#include <iostream>
using namespace std;
int main() {
    int a,b;
    char ch;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Enter your operation(+,-,*,/,%): ";
    cin>>ch;
    switch(ch) {
        case '+':
            cout<<"Addition: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Subtraction: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Multiplication: "<<a*b<<endl;
            break;
        case '/':
            if(b==0)
                cout<<"Division not possible\n";
            else
                cout<<"Quotient: "<<a/b<<endl;
            break;
        case '%':
            cout<<"Remainder: "<<a%b<<endl;
            break;
        default:
            cout<<"Invalid operation\n";
    }
}