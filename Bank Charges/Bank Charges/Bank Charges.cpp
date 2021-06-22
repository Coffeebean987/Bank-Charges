
//3/19/2019
//This program is purposed to display bank charges
//for a commercial checking account.

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	float		current_balance,	//Variables used in this program
		under_minimum,
		total_charge,
		number_checks,
		final_check_charge;

	double month_charge = 10;										// Monthly charge of bank account per month

	cout << "Please enter the current balance: ";					//Beginning balance, current_balance
	cin >> current_balance;											//is just a place holder, no value.
	cout << "Enter the number of checks you wish to process: ";
	cin >> number_checks;											//Number of checks user inputs


	if (number_checks <= -1)

	{
		cout << "Please Re-Enter the amount of checks you wish to process: ";				//This statement is a safety-precaution
		cin >> number_checks;
	}																	//if the user inputs negative checks.

	if (number_checks <= -1)

	{
		cout << "WARNING: You cannot enter negative checks! Please try again." << endl;

		system("pause");																	//This statement stops the program if the user enters
		return 0;																			//a negative check amount.
	}
	if (number_checks <= 19)							//These "if" statements go through
		(final_check_charge = number_checks * 0.10);	//the various check charges based on
														//the check criteria.

	if (number_checks >= 20 && number_checks <= 39)
		(final_check_charge = number_checks * 0.08);

	if (number_checks >= 40 && number_checks <= 59)
		(final_check_charge = number_checks * 0.06);

	if (number_checks >= 60)
		(final_check_charge = number_checks * 0.04);


	cout << endl;

	cout << "\t\tBank Statement\n\n"; //Display the Bank Statement outcome

	cout << "Beggining Balance: " << setw(5) << "$" << current_balance << endl;

	if (current_balance <= -1)
	{
		(cout << endl);
		(cout << "Warning! Account Overdrawn!\n");		//A warning signifying the account is overdrawn
														//if the user inputs negative data
	}
	cout << endl;
	cout << "Number of checks: " << setw(7) << number_checks << endl;
	cout << endl;
	cout << fixed << showpoint;							//Uses setprecision to make the dollar amounts work
	cout << setprecision(2);
	cout << "Check Charge: " << setw(10) << "$" << final_check_charge << endl;
	cout << endl;


	if (current_balance < 400.00)							//A Under Minimum charge is added if the account is below $400.
		(under_minimum = 15.00);						//If not, the value is set to zero

	else (under_minimum = 0.00);




	cout << "Monthly Charge: " << setw(8) << "$" << month_charge << endl;
	cout << endl;
	cout << "Under Minimum Charge: " << setw(2) << "$" << under_minimum << endl;

	(total_charge = month_charge + under_minimum + final_check_charge); //Adds all the charges together for a total charge

	cout << endl;
	cout << "Total Charges: " << setw(9) << "$" << total_charge << endl;
	cout << endl;





	system("pause");												//Pauses the program for the user to look at the data
	return 0;
}