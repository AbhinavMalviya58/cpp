#include<iostream>
#include<conio.h>
using namespace std;
struct book
/*
Access specifiers
1. private
2. public
3. protected
*/
{
    private:
        int bookid;
        char title[20];
        float price;
    public:
    void input()
    {
        cout<<"Enter bookid,title and price"<<endl;
        cin>>bookid>>title>>price;
        if(bookid<0)
            bookid=-bookid;
            if(price<0)
                price=-price;
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
