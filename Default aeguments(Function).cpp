
#include<iostream>
#include<conio.h>
using namespace std;
int add( int,int,int=0);
main()
{
    int a,b,c;
    cout<<"Enter a tow number"<<endl;
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b)<<endl;
    cout<<"Enter a three number"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a,b,c)<<endl;

}
int add(int x,int y,int z)
{
    return(x+y+z);
}
