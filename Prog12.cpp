//Simple interest and compound interest.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, R, T, n, A;
    double SI, CI;

    cout<<"Enter Principal Amount: ";
    cin>>P;
    cout<<"Enter Rate of Interest ( % ): ";
    cin>>R;
    cout<<"Enter Time in Years: ";
    cin>>T;
    cout<<"Enter Number of times Interest Compounded Per year: ";
    cin>>n;

    SI = (P*R*T)/100;
    A = P*pow((1+(R/100)/ n),n*T);

    CI=A-P;

    cout<<"\n--------Result--------";
    cout<<"\nSimple Interest: "<<SI;
    cout<<"\nFinal Result ( Simple Interest ):" <<(SI+P);
    cout<<"\n===============================\n";
    cout<<"\nCompound Interest: "<<CI;
    cout<<"\nFinal Result ( Compound Interest ):" <<A;

    return 0;
}