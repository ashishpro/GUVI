
#include<string>
#include <iostream>


int digit_no(int temp,int c)
{
	while (temp != 0)
	{
		temp = temp / 10;
		c++;
	}
	return c;
}
int main()
{
	long long int value(0);
	static long long int count(0);
	std::cin >> value;
	std::cout << digit_no(value,0);
	return 0;
}
