
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter any year : ";    cin>>year;
    if(year<0) {
        cout<<"Year cannot be negative";
        return -1; // we are creating error code as first exit
    }
    else if (year > 9999 ) {
        cout<<"Year cannot be beyond 9999 ( please supply 1-9999)";
        return -2; // we are creating second error code as second exit
    }
    else if (year>2021) {
        cout<<"Year entered by you is a future year : "<<year;
    }
    else if ( year < 2021) {
        cout<<"Year entered by you is a past year : "<<year;
    }
    else {
        cout<<"Year entered by you is current year : "<<year;
    }

    //these are evenly divided by 100 but not by 400
    //1700 1800 1900 2100 2200 2300 2500 2600

    //but following years are leap years
    //1600 2000 2400

    // || means OR operator
    // && means AND operator

    if(  (year % 4 == 0  && year % 100!=0 ) || (year % 400==0) )
    {
        cout<<"\nIts a leap year";
    }
    else {
        cout<<"\nIts NOT a leap year";
    }


    float moon = 0.166;
    float jupitor = 2.5374;

    int normalWeight=88; //kg

    double weightOnMoon = moon * normalWeight;
    double weightOnJupitor = jupitor * normalWeight;

    cout<<"\nYour weight on Earth   is : "<<normalWeight;
    cout<<"\nYour weight on Moon    is : "<<weightOnMoon;
    cout<<"\nYour weight on Jupitor is : "<<weightOnJupitor;

    double speed_of_light=186000.519; // miles per second
    int time_to_reach_on_earth=480; // seconds took to reach on earth
    long double distance = speed_of_light * time_to_reach_on_earth;
    cout<<"\nDistance between The Earth and The Sun : "<<(unsigned)distance;

    return 0; // 0 means successful exit
}
