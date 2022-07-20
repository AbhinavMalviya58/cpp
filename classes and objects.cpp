/*
The only differensce between stucture and class is that---

- the member of structures are by default public.
- the member of class are by default private.

*/
#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
      int a,b;
    public:
        void data(int x,int y)
            {
                a=x;
                b=y;
            }
        void shoe_data()
        {
            cout<<"a = "<<a<<endl<<"b = "<<b;
        }
};
main()
{
    complex b;  // b is object
    b.data(3,4);
    b.shoe_data();
}
