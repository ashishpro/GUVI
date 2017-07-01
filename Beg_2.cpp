
#include<string>
#include <iostream>


int main()
{
	long long int number = 0;
	std::cin >> number;std::cin.ignore();
	std::string ans = (number % 2 != 0) ? ("ODD") : ("EVEN");
	std::cout << ans;
	return 0;
}
