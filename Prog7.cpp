/*Write a program that:
Takes two integers
Prints their AND, OR, XOR, Left Shift, Right Shift
 Concepts: bitwise operators*/

 #include <iostream>
 using namespace std;
 
 int main() {
     int a, b;

     cout<<"Enter the value of a: ";
     cin>>a;
     cout<<"Enter the value of b: ";
     cin>>b;

     cout<<"\n=========================";
     cout<<"     \nBitwise Operations";
     cout<<"\n=========================";

     cout<<"\nAnd(&) of a and b: "<<(a & b);
     cout<<"\nOR(|) of a and b: "<<(a | b);
     cout<<"\nXOR(^) of a and b: "<<(a ^ b);
     cout<<"\nLeft Shift(<<) of a: "<<(a << 1);
     cout<<"\nRight Shift(>>) of a: "<<(a >> 1);
     cout<<"\nLeft Shift(<<) of b: "<<(b << 1);
     cout<<"\nRight Shift(>>) of b: "<<(b >> 1);
     return 0;
 }