//Swap using arithmetic operators.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Before Swapping: "<<"\na:"<<a<<"\nb:"<<b;
     
    a=a * b;
    b=a / b;
    a=a / b;

    cout<<"\nAfter Swapping: "<<"\na:"<<a<<"\nb:"<<b;
    return 0;
}