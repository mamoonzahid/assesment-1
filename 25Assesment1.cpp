#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b;
	char c;
	string n;
	cout << "Enter your full name: ";
	getline(cin, n);
	cout << "enter your age: ";
	cin >> a;
	cout << "1: Abu Dhabi transportation charges are AED 1000.\n2: Sharjah, transportation charges are AED 500.\n3: Ajman transportation charges are AED 390.\n4: Dubai transportation charges are AED 650.\n5: Rak, transportation charges are AED 250.\n6: Umm - Al - Quwain, transportation charges are AED 300.\n7: Fujairah, transportation charges are AED 300\n8: Al Ain, transportation charges are AED 1000.\n9: Other, no transportation available." << endl;
	cout << "select an appropriate option (0-9): ";
	cin >> b;
	if (b >= 0 && b <= 8)
	{
		cout << "\nDo you want to avail the transportation? (Y/N): ";
		cin >> c;
		switch (c)
		{
		case 'y':
		case 'Y':
		{
			cout << "Confirmed" << endl;
			break;
		}
		case 'n':
		case 'N':
		{
			cout << "Cancelled" << endl;
			break;
		}
		default:
		{
			cout << "Incorrect Answer" << endl;
			break;
		}
		}
	}
	else
	{
		cout << "No transportation for you" << endl;
	}
	return 0;
}