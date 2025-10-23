//Salary With Bonus.

#include <iostream>
using namespace std;

int main() {
    
    double salary;
    int years;

    cout<<"Enter your Previous Salary: ";
    cin>>salary;
    cout<<"Enter Experience ( in Years ): ";
    cin>>years;

    if(years >= 5){
        salary = salary+(salary*0.10);
        cout<<"Final Salary After Increment: "<<salary;
    }else if(years >= 10){
        salary = salary+(salary*0.20);
        cout<<"Final Salary After Increment: "<<salary;
    }else{
        cout<<"Sorry! You are not eligible for increment in your salary.";
    }
    return 0;
}