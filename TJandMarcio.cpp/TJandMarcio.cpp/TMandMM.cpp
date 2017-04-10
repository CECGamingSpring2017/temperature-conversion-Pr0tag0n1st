#include <iostream>
using namespace std;
#include <iomanip>
int main() {
	double num;
	char type = 'a';
	cout << "Can you give me a temperature and the conversion used for it?" << endl;
	cin >> num >> type;

	if (type == 'F') {
		cout << fixed << setprecision(2) << num << type << endl;
		num = (num - 32) * 5 / 9;
		type = 'C';
		cout << fixed << setprecision(2) << num << type << endl;
		num = num + 273;
		type = 'K';
		cout << fixed << setprecision(2) << num << type << endl;
	}
	else if (type == 'C') {
		cout << fixed << setprecision(2) << 9 / 5 * num + 32 << "F" << endl;
		cout << fixed << setprecision(2) << num << type << endl;
		num = num + 273;
		type = 'K';
		cout << fixed << setprecision(2) << num << type << endl;

	}
	else if (type == 'K') {
		cout << fixed << setprecision(2) << 9 / 5 * (num - 273) + 32 << "F" << endl;
		cout << fixed << setprecision(2) << num - 273.15 << "C" << endl;
		cout << fixed << setprecision(2) << num << type << endl;
	}
	if (num <= 273.15)
		cout << "brrrrrr" << endl;
	else if (num >= 373.15)
		cout << "pant, pant, pant" << endl;
	else
		cout << "You are a fugitive from the law of averages." << endl;

}