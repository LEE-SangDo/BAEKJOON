// 두 수의 사칙연산 문제

/*
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	cout << a - b;

	return 0;
}
*/

/*#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	cout << a * b;

	return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	cout << fixed;
	cout.precision(9);
	cout << (double)a / b;

	return 0;
}