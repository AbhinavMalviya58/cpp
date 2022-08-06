
#include <iostream>
#include <conio.h>
using namespace std;
int prime(int,int);
main()
{
    int num1,num2;
    cout<<" Enter Starting Number "<<endl;
    cin>>num1;
    cout<<" Enter Last Number "<<endl;
    cin>>num2;
    prime(num1,num2);

    getch();
}
int prime(int a,int b)
{
    int f=0,i;
    while(a<=b)
    {
        f=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                f=1;
                break;
            }
        }
    if (f==0)
        cout<<a<<" is a prime "<<endl;
    a=a+1;
    }

}
