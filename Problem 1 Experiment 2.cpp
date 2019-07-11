// preprocessor - used to access iostream and conio.h
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
	// switch is used to select the desired cases.
	// to access cases we must input letters based on what asks and it will execute.
	switch (type_of_package)
	{	
		case 'a':
		case 'A':
					// the formula for ten hour plan.
					if (hours_of_used<=10)
					{
					cout <<"Your Monthly is P995" << endl;
					}
					else 
					// the formula is hours of used minus ten opening and closing parenthesis times twenty plus 995.
					{
					monthly_due = 20 * (hours_of_used - 10) + 995;
					cout <<"Your Monthly is"<<" "<<monthly_due<<" "<<"Pesos";
					}
			
					break;	
		case 'b':
		case 'B':
			// another case for twenty hour plan.
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
			// default if you put a non-letter or symbol
			// letter is only accepted because cases were declared in char data type.
		default:
			cout << "Invalid Input" << endl;
	}
	getch();
	return 0;
	
}
