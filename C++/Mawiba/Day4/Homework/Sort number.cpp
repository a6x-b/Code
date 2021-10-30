#include <iostream>
using namespace std;
int main()
{
long long a,b,c;
cin>> a >>b >> c;
if (a>=b and b>=c)
    cout << c <<endl << b << endl<< a <<endl<<endl << a <<endl << b << endl<< c <<endl;
else  if (c>=b and b>=a)
    cout << a <<endl << b << endl<< c <<endl<<endl << a <<endl << b << endl<< c <<endl;
else if (a>=c and c>=b)
    cout << b <<endl << c << endl<< a <<endl<<endl << a <<endl << b << endl<< c <<endl;
else  if (b>=c and c>=a)
    cout << a <<endl <<c << endl<< b <<endl<<endl << a <<endl << b << endl<< c <<endl;
else if (b>=a and a>=c)
    cout << c <<endl << a << endl<< b <<endl<<endl << a <<endl << b << endl<< c <<endl;
else if (c>=a and a>=b)
    cout << b <<endl << a << endl<< c <<endl<<endl << a <<endl << b << endl<< c <<endl;
}