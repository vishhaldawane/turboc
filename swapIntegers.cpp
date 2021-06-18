#include <iostream>
using namespace std;
void swapInteger(int x, int y) // copy of 10 is assigned to x and 20 to y
{
    cout<<"\nswapInteger is invoked...swapping...";
    int temp = x; // hold 10 here in temp
    x = y; //  10
    y = temp; //
    cout<<"\nswapInteger: x : "<<x;
    cout<<"\nswapInteger: y : "<<y;
    cout<<"\nswapInteger is about to finish...swapped...";
}
void swapIntegerViaReference(int &x, int &y) // copy of 10 is assigned to x and 20 to y
{
    cout<<"\nswapIntegerViaReference is invoked...swapping...";
    cout<<"\nswapIntegerViaReference: x : "<<x;
    cout<<"\nswapIntegerViaReference: y : "<<y;
    int temp = x; // hold 10 here in temp
    x = y; //  10
    y = temp; //
    cout<<"\nswapIntegerViaReference: x : "<<x;
    cout<<"\nswapIntegerViaReference: y : "<<y;
    cout<<"\nswapIntegerViaReference is about to finish...swapped...";
}
int main()
{
    int x=10;
    int y=20;
    cout<<"main: x : "<<x<<endl;
    cout<<"main: y : "<<y<<endl;
 //   swapIntegerViaReference(x,y); // we are passing reference and not value
     swapInteger(x,y); // are we passing value of x and y ???
    cout<<"\nBACK TO MAIN After swap:"<<endl;
    cout<<"main: x : "<<x<<endl;
    cout<<"main: y : "<<y<<endl;
    return 0;
}
