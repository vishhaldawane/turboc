#include <iostream>
#include <string.h>
using namespace std;
struct MyDate
{
    int day; int month; int year;
};
struct Book // blueprint of a house/ template / design
{
       int isbn;
       char bookTitle[50];
       char bookAuthor[50];
       int numberOfPages;
       float bookPrice;
       int edition;
       int yearOfPublication;

       struct MyDate orderDate;
       struct MyDate shipDate;

       /*int orderDay;
       int orderMonth;
       int orderYear;*/

       /*int shipDay;
       int shipMonth;
       int shipYear;*/

};
void printDate1(struct MyDate x, char format)
{
    cout<<x.day<<format<<x.month<<format<<x.year<<endl;
}
void printDate2(struct MyDate x,char format)
{
    cout<<x.year<<format<<x.month<<format<<x.day<<endl;
}
//accessors mutators
void printBook(struct Book x) {// formal argument
    cout<<"Book ISBN    : "<<x.isbn<<endl;
    cout<<"Book Name    : "<<x.bookTitle<<endl;
    cout<<"Book Author  : "<<x.bookAuthor<<endl;
    cout<<"Book Pages   : "<<x.numberOfPages<<endl;
    cout<<"Book Edition : "<<x.edition<<endl;
    cout<<"Book Cost    : "<<x.bookPrice<<endl;
    cout<<"Book Year    : "<<x.yearOfPublication<<endl;
    cout<<"Order Date   : ";
    printDate1(x.orderDate,'-');
    cout<<"Ship  Date   : ";
    printDate2(x.shipDate,'/');

    /*
    cout<<"Order Date   : "<<x.orderDate.day<<"/"<<x.orderDate.month<<"/"<<x.orderDate.year<<endl;
    cout<<"Ship  Date   : "<<x.shipDate.day<<"/"<<x.shipDate.month<<"/"<<x.shipDate.year<<endl;
    */
    cout<<"---------------------------------------"<<endl;
}
int main(){

    struct Book b1 = {100,"The C Programming Language","Dennis Ritchie",300,250.00,1,1978,18,06,2021,25,06,2021}; // INR
    struct Book b2 = {200,"The C++ Programming Language","Bjarne Stroustup",400,550.00,2,1984,19,06,2021,27,06,2021}; // INR
    struct Book b3 = {300,"The Java Programming Language","James Gosling",500,1250.00,3,2014,21,06,2021,28,06,2021}; // INR

    printBook(b1);    printBook(b2); printBook(b3);

}
