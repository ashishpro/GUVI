
#include <string>
#include <iostream>

int main()
{
	int nm(0);
	std::cin >> nm;
	nm = std::abs(nm);
	std::string ans = std::to_string(nm);
	std::string temp = ans;
	std::reverse(ans.begin(),ans.end());
	if (ans == temp)
		std::cout << "Palindrome";
	else
		std::cout << "Not a Palindrome";
	return 0;
}
