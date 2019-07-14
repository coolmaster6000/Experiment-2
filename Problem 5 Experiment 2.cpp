#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int fibonacci_number;
    int fibonacci_term;
	int num1;
	int num2;
    int ffterm;
	num1 = 0;
	num2 = 1;
	ffterm = 0;

    cout << "Fibonacci Numbers: ";
    for (fibonacci_number = 1; fibonacci_number <= 22; ++fibonacci_number)
    {
        if(fibonacci_number == 1)
        {
            cout <<"\n"<< num1 <<",";
            continue;
        }
        if(fibonacci_number == 2)
        {
            cout << num2 << ",";
            continue;
        }
        ffterm = num1 + num2;
        num1 = num2;
        num2 = ffterm;
        
        cout << ffterm << ",";
    }
    getch();
    return 0;
}
