
#include<string>
#include <iostream>

int main()
{
	int year(0);
	std::cin >> year;
	if (year > 0)
	{
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
					std::cout << "Leap Year";
				else
					std::cout << "Not A Leap Year";
			}
			else
				std::cout << "Leap Year";
		}
		else
			std::cout << "Not A Leap Year";
	}
	else
		std::cout << "Invalid Year";
	return 0;
}
