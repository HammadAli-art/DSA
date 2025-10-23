/*Write a program that takes a character input and checks whether it is
An uppercase alphabet
A lowercase alphabet
A digit
A special character*/

#include <iostream>
using namespace std;

int main() {
    char ch;
     
    cout<<"Enter a Character: ";
    cin>>ch;

    if(ch>='A' && ch<='Z')
    cout<<"Uppercase Alphabet.";

    else if(ch>='a' && ch<='z')
    cout<<"Lowercase Alphabet.";

    else if(ch>='0' && ch<='9')
    cout<<"Digit.";

    else
    cout<<"Special Character.";
    return 0;
}