/* Write a C++ program that:
Asks the user for their name and age
Prints "Hello <name>, you are <age> years old!"*/

#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;

    cout<<"Hello! "<<name<<" you are "<<age<<" years Old.";
    return 0;
}