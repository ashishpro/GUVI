
#include<string>
#include <iostream>

long long int nat_sun(long long int x)
{
	if (x <= 1 )
		return x;
	x += nat_sun(x-1);
}
int main()
{
	long long int value(0);
	std::cin >> value;
	std::cout << nat_sun(value);
	return 0;
}
