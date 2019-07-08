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
    cout << "Type How Many Terms: ";
    cin >> fibonacci_term;
    cout << "Fibonacci Number Series: ";
    for (fibonacci_number = 1; fibonacci_number <= fibonacci_term; ++fibonacci_number)
    {
        if(fibonacci_number == 1)
        {
            cout << " " << num1;
            continue;
        }
        if(fibonacci_number == 2)
        {
            cout << num2 << " ";
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
