#include <iostream>
using namespace std;

    void fx(int xval)
{
   int x;
   x = xval;
   cout  << &x;
}
void gx(int yval)
{
   int y;
  cout << &y;
}
int main()

{
   fx(7);
   cout << endl;
   gx(11);
   return 0;
} 

