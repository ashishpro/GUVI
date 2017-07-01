#include<string>
#include <iostream>


int main()
{
	int number = 0;
	std::cin >> number;std::cin.ignore();
	std::string ans = (number == 0) ? ("ZERO") : ((number < 0) ? ("NEGATIVE") : ("POSITIVE"));
	std::cout << ans;
	return 0;
}
