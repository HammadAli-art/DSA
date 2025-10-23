/*Write a program to check whether a given number is a power of 2 using bitwise operators.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if(num > 0 && ((num & (num-1))==0)){
        int power = log2(num);
        cout<<num<<" is the power of 2.\nAnd it is 2 rasied to power "<<power<<".";
    }else{
        cout<<num<<" is not the power of 2.";
    }
    return 0;
}