#include <iostream>
#include <string.h>
using namespace std;

int moon4()
{
    //declaration
    int isbn;
    char bookTitle[20];
    char bookAuthor[20];
    int numberOfPages;
    float bookPrice;
    int edition;

    //initialization
    isbn=100;
    strcpy(bookTitle,"The C Programming Language");
    strcpy(bookAuthor,"Dennis Ritchie");
    numberOfPages=300;
    edition=1;
    bookPrice=250.00; // INR

    cout<<"Book ISBN    : "<<isbn<<endl;
    cout<<"Book Name    : "<<bookTitle<<endl;
    cout<<"Book Author  : "<<bookAuthor<<endl;
    cout<<"Book Pages   : "<<numberOfPages<<endl;
    cout<<"Book Edition : "<<edition<<endl;
    cout<<"Book Cost    : "<<bookPrice<<endl;

    int isbn1;
    char bookTitle1[20];
    char bookAuthor1[20];
    int numberOfPages1;
    float bookPrice1;
    int edition1;

     //initialization
    isbn1=200;
    strcpy(bookTitle1,"The C++ Programming Language");
    strcpy(bookAuthor1,"Bjarne Stroustup");
    numberOfPages1=400;
    edition1=2;
    bookPrice1=550.00; // INR
    cout<<"\n";
    cout<<"Book ISBN    : "<<isbn1<<endl;
    cout<<"Book Name    : "<<bookTitle1<<endl;
    cout<<"Book Author  : "<<bookAuthor1<<endl;
    cout<<"Book Pages   : "<<numberOfPages1<<endl;
    cout<<"Book Edition : "<<edition1<<endl;
    cout<<"Book Cost    : "<<bookPrice1<<endl;


}
