#include <iostream>
#include <string.h>
using namespace std;

//palindrome logic // madam

int moon2()
{
    char countryName[30]="South Africa";

    cout<<"\nCountry   : "<<countryName;
    cout<<"\nLength is : "<< strlen(countryName);


    char anotherCountry[30] ="India";
    cout<<"\nanotherCountry   : "<<anotherCountry;
    cout<<"\nLength is : "<< strlen(anotherCountry);

    strcpy(anotherCountry, countryName);
    cout<<"\nanotherCountry   : "<<anotherCountry;
    cout<<"\nLength is : "<< strlen(anotherCountry);

    strcat(anotherCountry," is great"); // merge "is great" at the end
    cout<<"\nanotherCountry   : "<<anotherCountry;
    cout<<"\nLength is : "<< strlen(anotherCountry)<<endl;;

    strcpy(anotherCountry,"Thando");
    for(int i=strlen(anotherCountry)-1; i>=0;i--) {
        cout<<"letter : "<<anotherCountry[i]<<endl;
    }


}
