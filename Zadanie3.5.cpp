#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int height = 10;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < height - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			cout << "^";
		}
		cout << endl;
	}
	for (int i = 0; i < height; i++) {
		cout << " =";
	}
	cout << endl;
	for (int i = 0; i < height - 2; i++) {
		cout << " | ";
		for (int j = 0; j < height - 2; j++) {
			cout << " ";
		}
			cout << "        |" << endl;
	}
	for (int i = 0; i < height; i++) {
		cout << " =";
	}
	cout << endl;
	return 0;
}