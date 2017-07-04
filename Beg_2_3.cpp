
#include <iostream>
#include <algorithm>


using namespace std;
int main() {
	int a = 10;
	cin >> a;
	bool f = false;
	if (a == 0 || a==1)
	{
		cout << "No Prime";
		return 0;
	}
	else
	{
		for (int i = 2;i < a - 1;i++)
		{
			if (a % i == 0)
			{
				f = true;
			}
		}
	}
	if (!f)
		cout << "Prime";
	else
		cout << "No Prime";
	return 0;
}
