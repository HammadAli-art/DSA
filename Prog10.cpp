/*Write a program that asks the user to enter two numbers, then shows a menu of choices (addition, subtraction, multiplication, division, modulus). 
Based on the users choice, perform the operation and display the result.*/

#include <iostream>
using namespace std;

int main() {
    double a, b;
    int choice;

    do{

        cout<<"\n==============================";
        cout<<"\nSimple and Basic Calculator";
        cout<<"\n==============================";

          cout<<"\nEnter the value of a: ";
          cin>>a;
          cout<<"Enter the value of b: ";
          cin>>b;

          cout<<"\nChoose Operation from given below: ";
          cout<<"\n1.Addition";
          cout<<"\n2.Subtraction";
          cout<<"\n3.Multiplication";
          cout<<"\n4.Division";
          cout<<"\n5.Modulus";
          cout<<"\n6.Exit.";
          
          cout<<"\nEnter your choice ( 1- 6): ";
          cin>>choice;

          switch(choice){
            case 1:
            cout<<"Addition of "<<a<<" and "<<b<<": "<<a+b;
            break;

            case 2:
            cout<<"Subtraction of "<<a<<" and "<<b<<": "<<a-b;
            break;

            case 3:
            cout<<"Multiplication of "<<a<<" and "<<b<<": "<<a*b;
            break;

            case 4:
            if(b==0)
            cout<<"Division by 0 is not possible.";
            else
            cout<<"Division of "<<a<<" and "<<b<<": "<<a/b;
            break;

            case 5:
             if(b==0)
            cout<<"Modulus by 0 is not possible.";
            else
            cout<<"Modulus of "<<int(a)<<" and "<<int(b)<<": "<<int(a) % int(b);
            break;

            case 6:
            cout<<"\nExit Program.....";
            break;

            default:
                cout<<"Invalid Choice! Choose Options between (1-6).";
            break;
            }

          }while(choice!=6);

    return 0;
}