#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char type_of_package;
	int hours_of_used;
	int monthly_due;
	cout <<"Choose Your Desired Plan" << endl;
	cout << "+ Type A or a for P995/mo.Additional Hours are P20" << endl;
	cout << "+ Type B or b for P1499/mo.Additional Hours are P10" << endl;
	cout <<	"+ Type C or c for P1995/mo." << endl;
	cout << "Type Your Choice: " << " ";
	cin >> type_of_package;
	cout << "Type Your Hours of used: "<<" ";
	cin >> hours_of_used;
	switch (type_of_package)
	{	
		case 'a':
		case 'A':
					if (hours_of_used<=10)
					{
					cout <<"Your Monthly is P995" << endl;
					}
					else 
					{
					monthly_due = 20 * (hours_of_used - 10) + 995;
					cout <<"Your Monthly is"<<" "<<monthly_due<<" "<<"Pesos";
					}
			
					break;	
		case 'b':
		case 'B':
				if (hours_of_used<=20)
					{
					cout <<"Your Monthly is P1499" << endl;
					}
					else 
					{
					monthly_due = 10 * (hours_of_used - 20) + 1499;
					cout <<"Your Monthly is"<<" "<<monthly_due<<" "<<"Pesos";
					}
				break;	
		case 'c':
		case 'C':
			cout << "You Got unlimited access" << endl;
			break;	
		default:
			cout << "Invalid Input" << endl;
	}
	getch();
	return 0;
	
}
