#include<iostream>
#include<conio.h>
using namespace std;
float area(int);
int area(int,int);
main()
{
    int R;
    cout<<"Enter radius of circle"<<endl;
    cin>>R;
    float A=area(R);
    cout<<"radius of circle is "<<A<<endl;
    int L,B,d;
    cout<<"Enter length and breadth of rectangle"<<endl;
    cin>>L>>B;
    d=area(L,B);
    cout<<"aera of rectangle "<<d;
    getch();
}
float area(int r)
{
    return(3.14*r*r);
}
int area(int l,int b)
{
    return(l*b);
}
