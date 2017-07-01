#include<string>
#include <iostream>


int main()
{
	char str;
	std::cin >> str;std::cin.ignore();
	str = toupper(str);
	std::string ans = (str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U')?("VOWEL"):("CONSONANT");
	std::cout << ans;
	return 0;
}
