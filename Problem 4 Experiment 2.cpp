#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x;
	
	cout <<"Counting..."<<endl;
	for (x=1;x<=10;x++)
	{
		cout << x << ",";
	}	
	for (x=11;x<=30;x++)
	{
		cout << x++ + 1<< ",";
	}
getch();
return 0;
}	
