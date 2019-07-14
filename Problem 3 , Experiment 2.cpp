#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()

{
	
double v1,v2,v4,v5;
float v3;
short int x,x1,x2,x3,x4;
int y;
const float z = 2.5;

cout << "Enter Your Choice of x:"<<" "<<flush;
cin >> x;
cout << endl;
	
cout << "Enter Your Choice of y:"<<" "<<flush;
cin >> y;
cout << endl;

if (x>=1 && x<=2){

// switch control statement is used to seclect the value of x.

switch (x){
		case 1:
		// in each statement there is a y condition. If the values if between the condition the equation will evaluated.
			if (y>=1 && y<=4){
				x1 = 1;
				v1 = x1 * y * z;
				cout <<"Answer is: "<< v1;
				}
				else if(y>=5){ 
				x2 = 1;
				v2 = x2 + y / z;
				cout <<"Answer is: "<< v2 << endl;
				}else{
				cout << "Invalid" << endl;
				}break;
		case 2:
			if (y>=1 && y<=5){
				x3 = 2;
				v3= x3 - y / z;
				cout <<"Answer is: "<< v3 << endl;
			}else if(y>=6){
				x4 = 2;
				v4 = x4 - sqrt (y+z);
				cout <<"Answer is: " << v4 << endl;
			}else{
				cout <<"Invalid" << endl;
				}break;


		}
		}
				else if(x>=3){
				v5 = x + y + z;
				cout << "Answer is: " << v5 << endl;
		}
getch();
return 0;
}
