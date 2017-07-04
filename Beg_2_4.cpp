
#include <iostream>
#include <algorithm>


using namespace std;
int main() {
	int first_n(0), second_n(0);
	cin >> first_n >> second_n;
	static int c = 0;
	for (int i = first_n; i < second_n;i++)
	{
		if (i % 2 == 0)
			cout << i << " ";
	}
	
	return 0;
}
