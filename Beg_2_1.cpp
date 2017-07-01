
#include<string>
#include <iostream>

int main()
{
	int no(0),pow(0);
	std::cin >> no >> pow;
	int t = no;
	pow--;
	if (no >= 0 && pow >= 0)
	{
		while (pow--)
		{
			no = no * t;
		}
		std::cout << no;
	}
	return 0;
}
