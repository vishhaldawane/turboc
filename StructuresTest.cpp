
#include <iostream>
#include <string.h>
using namespace std;

int moon5()
{
    struct Book // blueprint of a house/ template / design
    {
        int isbn;
        char bookTitle[20];
        char bookAuthor[20];
        int numberOfPages;
        float bookPrice;
        int edition;
    };

    struct Book b1; // USER DEFINED DATA TYPE = UDT

    //initialization

    b1.isbn=100;
    strcpy(b1.bookTitle,"The C Programming Language");
    strcpy(b1.bookAuthor,"Dennis Ritchie");
    b1.numberOfPages=300;
    b1.edition=1;
    b1.bookPrice=250.00; // INR

    cout<<"Book ISBN    : "<<b1.isbn<<endl;
    cout<<"Book Name    : "<<b1.bookTitle<<endl;
    cout<<"Book Author  : "<<b1.bookAuthor<<endl;
    cout<<"Book Pages   : "<<b1.numberOfPages<<endl;
    cout<<"Book Edition : "<<b1.edition<<endl;
    cout<<"Book Cost    : "<<b1.bookPrice<<endl;

    struct Book b2;
     //initialization
    b2.isbn=200;
    strcpy(b2.bookTitle,"The C++ Programming Language");
    strcpy(b2.bookAuthor,"Bjarne Stroustup");
    b2.numberOfPages=400;
    b2.edition=2;
    b2.bookPrice=550.00; // INR
    cout<<"\n";
    cout<<"Book ISBN    : "<<b2.isbn<<endl;
    cout<<"Book Name    : "<<b2.bookTitle<<endl;
    cout<<"Book Author  : "<<b2.bookAuthor<<endl;
    cout<<"Book Pages   : "<<b2.numberOfPages<<endl;
    cout<<"Book Edition : "<<b2.edition<<endl;
    cout<<"Book Cost    : "<<b2.bookPrice<<endl;


}
