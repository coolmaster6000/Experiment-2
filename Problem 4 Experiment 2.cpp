#include<iostream>
#include<conio.h>

using namespace std;

int main()
{	
	cout <<"Counting..."<<endl;
	// for loop the number is up to ten.
	for (int x=1;x<=10;x++)
	{
		cout << x << ",";
	}
	// another for loop, it starts to 11 and the loop ends at 30.
	for (int x=11;x<=30;x++)
	{
		cout << x++ + 1<< ",";
	}
	
getch();
return 0;
}	
