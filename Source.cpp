// Currency Converter to convert Great British Pounds to American Dollars, Euros and Czech Koruna 


#include <string>
#include <iostream>


using namespace std;

int main() {
	double Pounds;
	string currency;

	cout<< "Currency Converter\n";
	cout << "Enter the ammount of Great British Pounds you want to convert:\n";
	cin>> Pounds;
	double dollar = Pounds * 1.35;
	double euro = Pounds * 1.19;
	double czechkr = Pounds * 29.60;

	cout << "Enter USD for converting GBP to USD, EUR for GBP to EUR, or Kc for GBP to Kč:\n";
	cin >> currency;

	if (currency == "USD") {
		cout << Pounds << " Pounds in Dollars = " << dollar;
	}

	else if (currency == "EUR") {
		cout << Pounds << " Pounds in Euro = " << euro;
	}

	else if (currency == "Kc") {
		cout << Pounds << " Pounds In Czech Koruna" << czechkr;
	}
	else {
		cout << "That's An Invalid Input! Please Try Again.";
	}
}




