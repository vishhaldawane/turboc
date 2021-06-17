#include <iostream>
using namespace std;
//generic solution
void validateValues(int actualValue, int minValue, int maxValue, char successMsg[], char errMsg[])
{       //23            1       &&   23     <=31
    if(actualValue >= minValue && actualValue <=maxValue) {
        cout<<successMsg;
    }
    else {        cout<<errMsg;    }
}
int moon() {
    int day, salary, street, year, month;

    cout<<"\nEnter day of month : ";    cin >> day; //1-31  23
    validateValues(day,1,31,"Valid Day","Invalid Day");//passing array as an argument
    cout<<"\nEnter month : ";           cin >> month; //1-31
    validateValues(month,1,12,"Valid Month","Invalid Month");//passing array as an argument

    cout<<"\nEnter year : ";           cin >> year; //1-31
    validateValues(year,1,9999,"Valid Year","Invalid Year");//passing array as an argument

    cout<<"\nEnter Salary : ";          cin >> salary; // 5000 25000

    validateValues(salary,5000,25000,"Valid Salary","Invalid Salary");

    cout<<"\nEnter street number : ";
    cin >> street; // 1-50
    validateValues(street,1,50,"Valid Street","Invalid Street");

    return 0;
}

 /* if(day >=1 && day<=31) {
        cout<<"\nValid day of number";
        cout<<"\nDay    is : "<<day;
    }
    else {
        cout<<"\nInvalid day of number";
    }*/

     /*if(street>=1 && street<=50) {
        cout<<"\nValid street number";
        cout<<"\nStreet is : "<<street;
    }
    else {
        cout<<"\nInvalid street number";
    } */

       /*if(salary >=5000 && salary<=25000) {
        cout<<"\nValid Salary range";
        cout<<"\nSalary is : "<<salary;
    }
    else {
        cout<<"\nInvalid Salary range";
    } */


