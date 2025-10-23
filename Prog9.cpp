//BMI Calculator.

#include <iostream>
using namespace std;

int main() {
    double height, weight;

    cout<<"Enter Height (in meters): ";
    cin>>height;
    cout<<"Enter Weight (in kg): ";
    cin>>weight;

    float bmi = weight / (height*height);
    if(bmi < 18.5)
    cout<<"Underweight.";
    else if(bmi < 25)
    cout<<"Normal.";
    else if(bmi <  30)
    cout<<"Overweight.";
    else
    cout<<"Obese";
    return 0;
}