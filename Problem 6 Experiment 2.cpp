#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
  int n, sum = 0;
    int x;
  do {
  	cout <<endl;
   	cout << "Enter a Number: "<<" ";
    cin >> n;
    if (n>0){
	
    for (int i = 1; i <= n; ++i) 
    
     sum += i;
    cout << "The sum of all whole numbers from 1 to "<< n << " is " << sum<<".";

}
    else
    {
	
    cout << "Thank You!"<< endl;
    
	}
  } while (n != 0);
 
  getch();
  return 0;
}

