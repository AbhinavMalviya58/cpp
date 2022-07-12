
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int year;
    cout<<"Enter a year ";
    cin>>year;
    if(year%400==0 || year%100!=0 && year%4==0)
        cout<<"Leep Year";
    else
        cout<<"Not a Leep Year";
    getch();
}
