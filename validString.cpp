#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {

    char fullname[50];
    bool validString = false;
    int wordCount=0;

    cout<<"\nEnter your full name : ";
    gets(fullname); // accept string with spaces within

    for(int i=0;i<strlen(fullname);i++) //Tha%ndo
    {
        cout<<"\n "<<fullname[i];
        if(fullname[i]==32) {
            wordCount++;
        }

        if( fullname[i]==32 || (fullname[i] >=65 && fullname[i]<=90) ||  (fullname[i] >=97 && fullname[i]<=122) )
            validString=true;
        else {
            validString=false;
            break;
        }
    }
    if(validString) {
        cout<<"\nName is valid : "<<fullname;
    }
    else {
        cout<<"\nName is invalid : "<<fullname;
    }
    cout<<"\nTotal words in it are : "<<++wordCount;
}
