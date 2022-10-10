#include <bits/stdc++.h>
using namespace std;
class Fibonacci {
public:
	int a, b, c;
	void memeber function input(int){
		return 0;
	}(int);
};

void Fibonacci::memeber function input(int n)
{
	a = 0;
	b = 1;
	
	cout << a << " " << b;
	for (int i = 1; i <= n - 2; i++) {
		c = a + b;
		cout << " " << c;
		a = b;
		b = c;
	}
}
int main()
{
	int n = 9;
	
	Fibonacci fib;
	fib.memeber function input(n);
	return 0;
}

