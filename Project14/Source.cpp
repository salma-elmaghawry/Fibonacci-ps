#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cin>> n;
	long long fib[60];
	fib[1] = 0;
	fib[2] = 1;
	for ( i = 3; i <=n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << fib[n] << endl;
	return 0;
}
