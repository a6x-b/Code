#include <iostream>
using namespace std;
int main()
{
long long a,b,c;
cin>> a >>b >> c;
if (a>=b && b>=c)
    cout << c <<endl << b << endl<< a <<endl<<endl << a <<endl << b << endl<< c <<endl;
else  if (c>=b && b>=a)
    cout << a <<endl << b << endl<< c <<endl<<endl << a <<endl << b << endl<< c <<endl;
else if (a>=c && c>=b)
    cout << b <<endl << c << endl<< a <<endl<<endl << a <<endl << b << endl<< c <<endl;
else  if (b>=c && c>=a)
    cout << a <<endl <<c << endl<< b <<endl<<endl << a <<endl << b << endl<< c <<endl;
else if (b>=a && a>=c)
    cout << c <<endl << a << endl<< b <<endl<<endl << a <<endl << b << endl<< c <<endl;
else if (c>=a && a>=b)
    cout << b <<endl << a << endl<< c <<endl<<endl << a <<endl << b << endl<< c <<endl;
}