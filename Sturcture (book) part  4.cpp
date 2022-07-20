#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
    void input()
    {
        cout<<"Enter bookid,title and price"<<endl;
        cin>>bookid>>title>>price;
    }
    void display()
    {
        cout<<endl<<bookid<<" "<<title<<" "<<price;
    }
};
main()
{
    book b1;
    b1.input();
    b1.display();
    getch();
}
