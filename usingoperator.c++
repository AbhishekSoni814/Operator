 /*Design a calculator to perform basic arithmetic operations (+,-,/,*) */

#include<iostream>
using namespace std;
int main()  
{
 float n1, n2;
 cout << "Enter the first number::";
 cin >> n1;

 cout << "Enter the second number::";
 cin >> n2;

 cout << "Sum = " << n1 + n2 <<endl;
 cout <<"Difference = " << n1 - n2 <<endl;
 cout <<"Product = " << n1 * n2 <<endl;
 cout << "Division = " << n1 / n2<<endl;
 return 0;
}