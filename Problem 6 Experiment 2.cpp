
#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
  int n, sum = 0;
    int x;
  do {
   cout <<"\n"<< "Enter a Number: "<<" ";
    cin >> n;
    for (int i = 1; i <= n; ++i) 
     sum += i;
    cout << "The sum of all whole numbers from 1 to "<< n << " is " << sum<<".";
  } 
  while (n != 0);
  {
  	cout <<"\n---------------------------------------------"<< endl;
  	cout <<"\nThank You" << endl;
  }
  getch();
  return 0;
}
