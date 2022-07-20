#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
} ;
void display(book);
book input();
main()
{
    book b1;
    b1=input();
    display(b1);
    getch();
}

void display(book b)
{
    cout<<b.bookid<<" "<<b.title<<" "<<b.price;
}

book input()
{
    book b2;
    cout<<"Enter a bookid,title and price"<<endl;
    cin>>b2.bookid>>b2.title>>b2.price;
    return(b2);
}
