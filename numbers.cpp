#include <iostream>   // подключение библиотеки работы с консолью

using namespace std;  // пространство имен

void main()
{
	int a, b, c;

	cin >> a >> b >> c;
	cout << a + b + c << endl;
	cout << a * b * c << endl;
	cout << (float)(a + b + c) / 3 << endl;
}