#include <iostream>
using namespace std;
int main() {

    int choice;

    do
    {
            cout<<"-------------------------"<<endl;
            cout<<"F O O D   M E N U "<<endl;
            cout<<"-------------------------"<<endl;
            cout<<"1. African"<<endl;
            cout<<"2. Indian"<<endl;
            cout<<"3. Italian"<<endl;
            cout<<"4. Exit"<<endl;
            cin>> choice;

            switch(choice)
            {
                case 1:
                    int africanChoice;
                    do
                    {
                            cout<<"-------------------------"<<endl;
                            cout<<"A F R I C A N   M E N U "<<endl;
                            cout<<"-------------------------"<<endl;
                            cout<<"1. Mogodu"<<endl;
                            cout<<"2. Pap and Wors"<<endl;
                            cout<<"3. Samp"<<endl;
                            cout<<"4. T-Bone steak"<<endl;
                            cout<<"5. Exit"<<endl;
                            cin>> africanChoice;
                            switch(africanChoice)
                            {
                                case 1: cout<<"\nYou are enjoying Mogodu.."; break;
                                case 2: cout<<"\nYou are enjoying Pap and Wors.."; break;
                                case 3: cout<<"\nYou are enjoying Samp..."; break;
                                case 4: cout<<"\nYou are enjoying T-Bone Steak.."; break;
                                case 5: cout<<"\nYou are Exiting.."; break;
                                default: cout<<"\nInvalid African Menu choice";
                            }
                    }while(africanChoice!=5);
                    break; // this is imp line for the main menu

                case 2: cout<<"\nIndian Menu..."; break;
                case 3: cout<<"\nItalian Menu..."; break;
                case 4: cout<<"\nExiting......"; break;
                default: cout<<"\nInvalid choice";
            }
    } while(choice!=4);

    return 0; // successful termination of your program
}

/*

          if(choice > 1 && choice < 20 ) {
                cout<<"\nCalculating bonus...";
            }
            else if(choice > 20 && choice <=30) {
                cout<<"\nCalculating interest...";
            }
            else if(choice == 3) {
                cout<<"\nCalculating total...";
            }
            else if(choice == 4) {
                cout<<"\nCalculating income...";
            }
            else if(choice == 5) {
                cout<<"\nCalculating expense...";
            }
            else if(choice == 6) {
                cout<<"\nExiting...";
            }

            */
