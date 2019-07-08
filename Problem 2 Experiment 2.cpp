#include<iostream>
#include<conio.h>
using namespace std;
int main()

{	
	short int water_demand = 35 ;
	int special_demand = 20;
	float additional_charge = 1.10;
	float waterbill1,waterbill2,waterbill3;
	int unpaid_balance;
	int gallons;
	
	
	cout << "Enter how many gallons monthly: " << " ";
	cin >> gallons;
	cout << "How much is your unpaid balance: "<< " ";
	cin >> unpaid_balance;
	if (unpaid_balance>=1){
	waterbill1 = gallons * additional_charge + unpaid_balance + water_demand;
	waterbill2 = 	waterbill1 + 20;
	cout << "Your waterbill is: " << waterbill2 << endl;
	}
	else 
	{
	waterbill3 = gallons * additional_charge + unpaid_balance + water_demand;
	cout << "Waterbill is: " << waterbill3 << endl;
	}

	getch();
	return 0;
	}
