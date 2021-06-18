#include <iostream>
using namespace std;

void calculateSimpleInterest(int p, int n, float r)
{
    cout<<"\ncalculateSimpleInterest: Memory of p: "<<(unsigned)&p;
    cout<<"\ncalculateSimpleInterest: Memory of n: "<<(unsigned)&n;
    cout<<"\ncalculateSimpleInterest: Memory of r: "<<(unsigned)&r;
}
void calculateSimpleInterestAgain(int &p, int &n, float &r)
{
    cout<<"\ncalculateSimpleInterestAgain: Memory of principal     : "<<(unsigned)&p;
    cout<<"\ncalculateSimpleInterestAgain: Memory of numberOfYears : "<<(unsigned)&n;
    cout<<"\ncalculateSimpleInterestAgain: Memory of rate          : "<<(unsigned)&r;
}

int main() //REFERENCE VARIABLES
{
    int principal=5000;
    int numberOfYears=3;
    float rate = 4.5;
    cout<<"\nmain: Memory of principal     : "<<(unsigned)&principal;
    cout<<"\nmain: Memory of numberOfYears : "<<(unsigned)&numberOfYears;
    cout<<"\nmain: Memory of rate          : "<<(unsigned)&rate;
    calculateSimpleInterest(principal,numberOfYears,rate); // function called by passing value
    calculateSimpleInterestAgain(principal,numberOfYears,rate); // function called by passing reference

    int johnson =1000;
    int &john=johnson; // ASSIGN JOHNSON'S VALUE TO JOHN

    cout<<"\njohnson : "<<johnson <<" stored at : "<<(unsigned long)&johnson;
    cout<<"\njohn    : "<<john<<" stored at : "<<(unsigned long)&john;

    johnson=1200;

    cout<<"\njohnson : "<<johnson <<" stored at : "<<(unsigned long)&johnson;
    cout<<"\njohn    : "<<john<<" stored at : "<<(unsigned long)&john;

    int &johny = john;
    cout<<"\n------------------------";
    cout<<"\njohnson : "<<johnson <<" stored at : "<<(unsigned long)&johnson;
    cout<<"\njohn    : "<<john<<" stored at : "<<(unsigned long)&john;
    cout<<"\njohny   : "<<johny<<" stored at : "<<(unsigned long)&johny;

    johny=1500;
    cout<<"\n------------------------";
    cout<<"\njohnson : "<<johnson <<" stored at : "<<(unsigned long)&johnson;
    cout<<"\njohn    : "<<john<<" stored at : "<<(unsigned long)&john;
    cout<<"\njohny   : "<<johny<<" stored at : "<<(unsigned long)&johny;

    return 0;
}
