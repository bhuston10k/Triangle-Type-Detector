#include <iostream>
using namespace std;

int main() {

	int a, b, c;

	do {
		cout << "Enter first number: ";
		cin >> a;
	} while (a > 200 || a < 1);

	do {
	cout << "Enter second number: ";
	cin >> b;
	} while (b > 200 || b < 1);

	do {
	cout << "Enter third number: ";
	cin >> c;
	} while (c > 200 || c < 1);

	if ((a >= 1 && a <= 200) && (b >= 1 && a <= 200) && (c >= 1 && a <= 200))
	{
		cout << "Input within range.\n";
	}
	else
		cout << "input out of range.\n";

	if ((a < b + c) && (b < a + c) && (c < a + b)) {
		//It's a triangle of type...
		if (a == b && a == c)
			cout << "Equilateral\n";
		else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
			cout << "Isoceles\n";
		else if ((a != b && a != c && c != a) && !(a <= b && b <= c))
			cout << "Scalene\n";
		else if (a <= b && b <= c) {
			cout << "Right Triangle.\n";
		}
	}
	else if (!(a < b + c) || !(b < a + c) || !(c < a + b))
		cout << "NotATriangle\n";
	

	return 0;
}