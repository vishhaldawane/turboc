
#include <iostream>
using namespace std;
int main()
{
    int year;

    cout<<"Enter any year : ";
    cin>>year;

    if (year>2021) {
        cout<<"Year entered by you is a future year : "<<year;
    }
    else if ( year < 2021) {
        cout<<"Year entered by you is a past year : "<<year;
    }
    else {
        cout<<"Year entered by you is current year : "<<year;
    }

    return 0;
}
