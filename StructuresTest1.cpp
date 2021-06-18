

#include <iostream>
#include <string.h>
using namespace std;

int moon6()
{
    struct Book // blueprint of a house/ template / design
    {
        int isbn;
        char bookTitle[50];
        char bookAuthor[50];
        int numberOfPages;
        float bookPrice;
        int edition;
    };

    struct Book b1 = {100,"The C Programming Language","Dennis Ritchie",300,1,250.00}; // INR
    struct Book b2 = {200,"The C++ Programming Language","Bjarne Stroustup",400,2,550.00}; // INR

    cout<<"Book ISBN    : "<<b1.isbn<<endl;
    cout<<"Book Name    : "<<b1.bookTitle<<endl;
    cout<<"Book Author  : "<<b1.bookAuthor<<endl;
    cout<<"Book Pages   : "<<b1.numberOfPages<<endl;
    cout<<"Book Edition : "<<b1.edition<<endl;
    cout<<"Book Cost    : "<<b1.bookPrice<<endl;


    cout<<"\n";
    cout<<"Book ISBN    : "<<b2.isbn<<endl;
    cout<<"Book Name    : "<<b2.bookTitle<<endl;
    cout<<"Book Author  : "<<b2.bookAuthor<<endl;
    cout<<"Book Pages   : "<<b2.numberOfPages<<endl;
    cout<<"Book Edition : "<<b2.edition<<endl;
    cout<<"Book Cost    : "<<b2.bookPrice<<endl;


}
