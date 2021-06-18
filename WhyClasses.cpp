
#include <iostream>
#include <string.h>
using namespace std;
//cloth
class Flight // blueprint of a house/ template / design
{
       int flightNumber;
       char airline[50];
       char source[50];
       char destination[50];
       float ticketCost;

    public:
       void setFlight(int f, char a[], char s[], char de[],float tc)
       {
           flightNumber=f;
           strcpy(airline,a);
           strcpy(source,s);
           strcpy(destination,de);
           ticketCost=tc;
       }
       void printFlight()
       {// formal argument
            cout<<"Flight Number : "<<flightNumber<<endl;;
            cout<<"Flight Airline: "<<airline<<endl;;
            cout<<"Flight Source : "<<source<<endl;;
            cout<<"Flight Destin : "<<destination<<endl;;
            cout<<"Flight ticket : "<<ticketCost<<endl<<endl;;;
           // strcpy(s.artist,"Mr. Obama");
       }
};
// Cat is an object = color, breed, weight, height + meow(), drinkMilk(), chaseMice()
class Song // blueprint of a house/ template / design
{

       char album[50];
       char title[50];
       char artist[50];
       int songYear;

    public:
        void setSong(char st[], char sa[], char art[], int sy)
        {
            strcpy(title,st);
            strcpy(album,sa);
            strcpy(artist,art);
            songYear=sy;
        }
       void printSong()
        {// formal argument
            cout<<"Song Title   : "<<title<<endl;;
            cout<<"Song Album   : "<<album<<endl;;
            cout<<"Song Artist  : "<<artist<<endl;; //ACCESSING
            cout<<"Song Year    : "<<songYear<<endl<<endl;
         //   strcpy(f.airline,"BackStreet boys"); //MUTATING
        }
};
//object = physical state + behaviour
// savingsaccount = , type, accopdate, branchname, bankbalance + withdraw(), deposit(), fundTransfer(), addPayee(),

class BankAccount
{
    int accountNumber;
	char accountHolderName[20];
	char accountType[20];
	float accountBalance;

    public:
    //constructor function - SAME AS CLASS NAME - IT DOES NOT HAVE RETURN TYPE
    BankAccount(int ba, char ahn[], char act[], float ab)
    {
        cout<<"\nSetting initial details for the BankAccount..."<<endl;
        accountNumber=ba;
        strcpy(accountHolderName,ahn);
        strcpy(accountType,act);
        accountBalance=ab;
    }
    void printBankAccount() // only for print here
	{
        cout<<"Account Number  : "<<accountNumber<<endl;
        cout<<"Account Name    : "<<accountHolderName<<endl;;
        cout<<"Account Type    : "<<accountType<<endl;;
        cout<<"Account Balance : "<<accountBalance<<endl;;
	}
	void withdraw(float amt)
	{
            cout<<"\nWithdrawing...."<<amt<<endl;
			accountBalance = accountBalance- amt;
	}
	void deposit(float amt)
	{
            cout<<"\nDepositing...."<<amt<<endl;
			accountBalance = accountBalance+ amt;
	}
};


int main(){

//CONSTRUCTOR IS CALLED DURING THE OBJECT CREATION - ONLY ONCE PER OBJECT
    BankAccount ba(101,"Savings","Thando S",50000);
    ba.printBankAccount();

    ba.withdraw(5000);

    ba.printBankAccount();

    ba.deposit(9000);

    ba.printBankAccount();

    ba.BankAccount(105,"Check","Thando $",150000);

   // ba.setBankAccount(105,"Check","Thando $",150000);

  // ba.printBankAccount();

    /*
    struct Flight f ; // {101,"British Airways","Mumbai","South Africa",50000};
    struct Song s; //={"Titanic","My Heart Will Go On","Celine D",1996};

    s.setSong("Titanic","My Heart Will Go On","Celine D",1996);
    f.setFlight(101,"British Airways","Mumbai","South Africa",50000);
    s.printSong();
    f.printFlight();

    cout<<"\nmain is nasty...\n";
    strcpy(s.artist,f.airline);
    strcpy(f.airline,s.title);

    s.printSong();
    f.printFlight();
*/
    return 0;
}
