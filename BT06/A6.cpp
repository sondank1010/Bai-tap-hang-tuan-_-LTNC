#include <iostream>
using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   cout << &x;
}
void g(int yval)
{
   int y;
   cout << &y;
}
int main()
{
   f(7);
   cout << endl;
   g(11);
   return 0;
} 
