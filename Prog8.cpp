/*Write a program that takes an integer 
and checks if it is even or odd using the bitwise AND (&) operator.*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    if(n & 1)
    cout<<n<<" is odd number.";
    else
    cout<<n<<" is even number.";
    return 0;
}