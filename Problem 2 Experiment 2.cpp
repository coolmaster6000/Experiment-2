#include<iostream>
#include<conio.h>
using namespace std;
int main()

{	
	const int water_demand = 35;
	const int special_demand = 20;
	const float additional_charge = 1.10;
	float waterbill1,waterbill2,waterbill3;
	int unpaid_balance;
	int gallons;
	
	cout <<"\t(Waterbill Computer)"<<endl;
	cout <<endl;
	cout << "(0)Enter how many gallons monthly: " << " ";
	cin >> gallons;
	cout<< endl;
	cout << "(0)How much is your unpaid balance: "<< " ";
	cin >> unpaid_balance;
	cout <<endl;
	if (unpaid_balance>=1){
	waterbill1 = gallons * additional_charge + unpaid_balance + water_demand;
	waterbill2 = 	waterbill1 + 20;
	cout << "(0)Your waterbill is: " <<"P "<< waterbill2 << endl;
	}
	else 
	{
	waterbill3 = gallons * additional_charge + unpaid_balance + water_demand;
	cout << "(0)Waterbill is: " <<"P "<< waterbill3 << endl;
	}

	getch();
	return 0;
	}
