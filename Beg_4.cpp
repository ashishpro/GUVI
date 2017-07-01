
#include<string>
#include <iostream>

int main()
{
	char str;
	std::cin >> str;std::cin.ignore();
	std::string ans = ((int)str >= 65 && (int)str <= 90) ? ("CHARACTER") : (((int)str >= 97 && (int)str <= 122) ? ("CHARACTER") : ("NOT A CHARACTER"));
	std::cout << ans;
	return 0;
}
