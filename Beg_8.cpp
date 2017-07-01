
#include<string>
#include <iostream>

int main()
{
	long long int value(0);
	static long long int count(0);
	std::cin >> value;
	if (value >= 0)
	{
		while (value)
		{
			count += value;
			value--;
		}
		std::cout << count;
	}
	else
		std::cout << "Invalid Input";
	return 0;
}
