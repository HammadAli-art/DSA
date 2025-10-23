/*Write a program that:
Takes radius as input And calculate the 
Area & Circumference of circle*/

#include <iostream>
using namespace std;

int main() {
    float radius;
    const double PI=3.147;

    cout<<"Enter Radius: ";
    cin>>radius;

    float Area_of_Circle = PI*radius*radius;
    float Circumference_of_Circle = 2*PI*radius;

    cout<<"Area of Circle: "<<Area_of_Circle;
    cout<<"\nCircumference of Circle: "<<Circumference_of_Circle;
    return 0;
}