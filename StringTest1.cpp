#include <iostream>
#include <string.h>
#include "mycompany.h"

using namespace std;
int main() {

    bool found=false; // TRUTH REQUIRES PROOF IN THE COURT, HENCE ITS FALSE
    char days[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char anyday[10];
    cout<<"\nEnter any day in string format ? ";
    cin>>anyday; // expected in string format   Tuesday | GUI drop down box

    cout<<"\nAny day is : "<<anyday; // Tuesday

    for(int i=0;i<7;i++) {
        if( strcmpi(anyday, days[i]) == 0) { // strcmpi will ignore case
            found=true;
            break;
        }
    }
    if(found) {
        cout<<endl<<"Valid Day";
    }
    else {
        cout<<endl<<"Invalid Day";
    }

   /* if(strcmp(today,"Thursday")==0) {
        cout<<"\nYes, today is : "<<today;
    }
    else {
        cout<<"\nNo, today is not "<<today;
    }
*/



    //cout<<"\nDay of Week : "<< dayOfWeek;
    //cout<<"\nlength      : "<< strlen(dayOfWeek);


}

