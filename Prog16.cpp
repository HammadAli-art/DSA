//Age Group Using Ternary Operator.

#include <iostream>
using namespace std;

int main() {
    int age;

    cout<<"Enter Age: ";
    cin>>age;

    string result = (age>0 && age<=2) ? "Baby":
                    (age>2 && age<=12) ? "Childhood":
                    (age>12 && age<=17) ? "Teenager/ Adolescent":
                    (age>17 && age<=25) ? "Young Adult":
                    (age>25 && age<=59) ? "Adult":
                    (age>59) ? "Old Age/ Senior Citizen":
                     "Invalid Age! Please Enter Valid Age.";
                     

     cout<<"According to the Age-> Result: "<<result;                
                    
    return 0;
}