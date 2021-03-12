
#include <iostream>

using namespace std;

long buff = 0;
long factorial(long x)
{
	if (x>1)
	{
		buff = x * factorial(x - 1);
		return buff;
	}
	else
	{
		return 1;
	}
}

int main()
{
	cout << "Choose number for factorialing ;): ";
	long a;
	cin >> a;
	cout << endl << "Factorial of " << a << " is: " << factorial(a);

}
