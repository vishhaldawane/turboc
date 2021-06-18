#include <iostream>
#include <string.h>
using namespace std;
struct Book // blueprint of a house/ template / design
{
       int isbn;
       char bookTitle[50];
       char bookAuthor[50];
       int numberOfPages;
       float bookPrice;
       int edition;
};
//accessors mutators
void printBook(struct Book x) {// formal argument
    cout<<"Book ISBN    : "<<x.isbn<<endl;
    cout<<"Book Name    : "<<x.bookTitle<<endl;
    cout<<"Book Author  : "<<x.bookAuthor<<endl;
    cout<<"Book Pages   : "<<x.numberOfPages<<endl;
    cout<<"Book Edition : "<<x.edition<<endl;
    cout<<"Book Cost    : "<<x.bookPrice<<endl;
    cout<<"---------------------------------------"<<endl;
}
int main(){

    struct Book b1 = {100,"The C Programming Language","Dennis Ritchie",300,250.00,1}; // INR
    struct Book b2 = {200,"The C++ Programming Language","Bjarne Stroustup",400,550.00,2}; // INR
    struct Book b3 = {300,"The Java Programming Language","James Gosling",500,1250.00,3}; // INR

    printBook(b1);    printBook(b2); printBook(b3);

}
