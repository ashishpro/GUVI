
#include<string>
#include <iostream>

int main()
{
	long long int n1(0), n2(0), n3(0);
	std::cin >> n1 >> n2 >> n3;
	std::cin.ignore();
	long long int  ans = (n1 > n2) ? ((n1 > n3) ? (n1) : (n3)) : ((n2 > n3) ? (n2) : (n3));
	std::cout << ans;
	return 0;
}
