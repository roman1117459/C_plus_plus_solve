#include <iostream>
using namespace std;

int main()
{
  int x = 11;
//   x++;
//   cout << x << endl;
//   x--;
//   cout << x;
  // int y = x++;   
  
  //Prefix ++ X and Postfix X ++ 
  
  int y = x--;
  cout << x << endl;
  cout << y;
  return 0;
}