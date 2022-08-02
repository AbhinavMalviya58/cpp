# include <iostream>
#include <conio.h>
using namespace std;
int main() {
char op;
float num1, num2;
cout << "Enter operator: +, -, *, /: "<<endl;
cin >> op;
cout << "Enter two operands: "<<endl;
cin >> num1 >> num2;
switch(op) {
case '+':
cout << num1 << " + " << num2 << " = " << num1 + num2;
break;
case '-':
cout << num1 << " - " << num2 << " = " << num1 - num2;
break;
case '*':
cout << num1 << " * " << num2 << " = " << num1 * num2;
break;
case '/':
cout << num1 << " / " << num2 << " = " << num1 / num2;
break;
default:
// If the operator is other than +, -, * or /, error message is shown
cout << "Error! operator is not correct"<<endl;
break;
}
return 0;
}
/*
Enter operator: +, -, *, /:
+
Enter two operands:
5+5=10
*/
