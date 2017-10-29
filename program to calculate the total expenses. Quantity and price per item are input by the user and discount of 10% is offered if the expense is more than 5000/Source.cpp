//program to calculate the total expenses. Quantity and price per item are input by the user and discount of 10% is offered if the expense is more than 5000.
#include <iostream>
using namespace std;

int main() {
	int quantity, price, total;

	cout << "Please Input Quantity:" << endl;
	cin >> quantity;

	cout << "please in Put your price " << endl;
	cin >> price;

	total = quantity*price;

	if (total > 5000)
	{
		cout << "Hurray! you get 10% Discount" << endl;
		int discount;
		discount = price*0.9;
		cout << "your total payment with 10% discount:" << discount << endl;
		cout << "thank you For chose us[press ENTER]";
	}
	else
	{
		cout << "your total payment:" << total << endl;
		cout << "thank you For chose us[press ENTER]";
	}

	system("pause");
	return 0;
}