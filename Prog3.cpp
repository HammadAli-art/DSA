/*Write a program that:
Takes a number as input
Prints whether it is greater than another number.*/

#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout<<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;

(num1>num2) ? 
cout<<num1<<" is Greater than "<<num2<<"."<<endl:
cout<<num2<<" is Greater than "<<num1<<"."<<endl;
    return 0;
}