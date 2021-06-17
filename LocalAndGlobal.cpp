#include <iostream>
using namespace std;

    //KNOWLEDGE,  VISION AND ATTITUDE
    // |
    // APPLY --> WISDOM - SELF EXPERIENCE
int global=100;

void globalFunction()
{
    int local=200;
    cout<<"\nIm global function : global " <<global;
    cout<<"\nIm global function : local " <<local;
    cout<<"\n---------------------";
}

int main()
{
    void localFunction1(); // forward declaration
    void localFunction2(); // forward declaration
    void localFunction3(); // forward declaration
    int local=300;
    cout<<"\nmain is printing global : "<<global;
    cout<<"\nmain is printing local  : "<<local;
    cout<<"\n---------------------";
    globalFunction();
    localFunction1(); // invocation of the function
    localFunction2(); // invocation of the function
    localFunction3(); // invocation of the function
    return 0;
}

void localFunction1() // definition is here
{
    global=999; // u r changing the value
    int local=400;
    cout<<"\nIm local function1 : global "<<global;
    cout<<"\nIm local function1 : local "<<local;
    cout<<"\n---------------------";
     // oh we are changing global value during the exit
}

void localFunction2() // definition is here
{
    int local=500;
    cout<<"\nIm local function2 : global "<<global;
    cout<<"\nIm local function2 : local "<<local;
    cout<<"\n---------------------";
}

void localFunction3() // definition is here
{
    int local=600;
    cout<<"\nIm local function3 : global "<<global;
    cout<<"\nIm local function3 : local "<<local;
    cout<<"\n---------------------";
}
