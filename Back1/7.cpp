// °ö¼ÁÀÇ ¾Ë°í¸®Áò

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	for (int i = b; i > 0; i = i / 10)
	{
		int t = i % 10;
		cout << a * t << endl;
	}

	cout << a * b << endl;

	return 0;

}