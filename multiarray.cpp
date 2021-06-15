#include <iostream>
using namespace std;
int main() 	{
    int sem1=0;    int sem2=0;
    int marks[2][6]=
    {
        {89,99,100,87,86,76}, // SEM-i  phy, chem, maths, eng1, eng2, eng3
        {87,95,98,84,82,78}  // SEM-ii phy, chem, maths, eng1, eng2, eng3
    };
    for(int i=0;i<6;i++)
    {
        cout<<"marks : "<<marks[0][i]<<endl;;
        sem1 = sem1 + marks[0][i];
    }
    cout<<"sem1 total is : "<<sem1<<endl;
    cout<<"-----------------------"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<"marks : "<<marks[1][i]<<endl;;;;;;;;;;;;
        sem2 = sem2 + marks[1][i];
    }
    cout<<"\nSem2 total is : "<<sem2<<endl;
   return 0;
}
